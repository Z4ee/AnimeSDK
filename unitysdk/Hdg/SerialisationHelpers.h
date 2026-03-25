#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/SerialisationHelpers_ArrayElementType.h"
#include "unitysdk/Hdg/SerialisationHelpers_PrimitiveType.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_SERIALISATIONHELPERS_READLIST_OFFSET UNITYSDK_OFFSET(0x83F0CE0)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x83F0DE0)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVELIST_OFFSET UNITYSDK_OFFSET(0x83F34D0)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x83F12D0)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x83F38A0)
#define HDG_SERIALISATIONHELPERS_READSERIALISERARRAY_OFFSET UNITYSDK_OFFSET(0x83F0ED0)
#define HDG_SERIALISATIONHELPERS_READUSERSTRUCTARRAY_OFFSET UNITYSDK_OFFSET(0x83F11C0)
#define HDG_SERIALISATIONHELPERS_WRITELIST_OFFSET UNITYSDK_OFFSET(0x83EE590)
#define HDG_SERIALISATIONHELPERS_WRITEPRIMITIVELIST_OFFSET UNITYSDK_OFFSET(0x83EE7D0)
#define HDG_SERIALISATIONHELPERS_WRITEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x83F0530)
#define HDG_SERIALISATIONHELPERS_WRITESERIALISERLIST_OFFSET UNITYSDK_OFFSET(0x83EFA60)
#define HDG_SERIALISATIONHELPERS_WRITEUSERSTRUCTLIST_OFFSET UNITYSDK_OFFSET(0x83EFDB0)
#define HDG_SERIALISATIONHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x83F3B20)

namespace Hdg
{
	inline static constexpr unsigned int SerialisationHelpers_TypeDefinitionIndex = 37877;

	class SerialisationHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_PrimitiveTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(SerialisationHelpers_TypeDefinitionIndex)->GetStaticField(0x412B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Void WriteList(::System::IO::BinaryWriter* bw, ::System::Collections::IList* list, ::Hdg::SerialisationHelpers_ArrayElementType type)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*, ::Hdg::SerialisationHelpers_ArrayElementType))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITELIST_OFFSET))(bw, list, type);
		}

		static ::System::Void WritePrimitiveList(::System::IO::BinaryWriter* bw, ::System::Collections::IList* array)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEPRIMITIVELIST_OFFSET))(bw, array);
		}

		static ::System::Void WriteSerialiserList(::System::IO::BinaryWriter* bw, ::System::Collections::IList* array)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITESERIALISERLIST_OFFSET))(bw, array);
		}

		static ::System::Void WriteUserStructList(::System::IO::BinaryWriter* bw, ::System::Collections::IList* array)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEUSERSTRUCTLIST_OFFSET))(bw, array);
		}

		static ::System::Void WritePrimitive(::System::IO::BinaryWriter* bw, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEPRIMITIVE_OFFSET))(bw, value);
		}

		static ::System::Void ReadList(::System::IO::BinaryReader* br, ::System::Collections::IList*& list, ::Hdg::SerialisationHelpers_ArrayElementType& type)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::IList*&, ::Hdg::SerialisationHelpers_ArrayElementType&))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READLIST_OFFSET))(br, list, type);
		}

		static ::System::Array* ReadPrimitiveArray(::System::IO::BinaryReader* r, ::System::Int32 count)
		{
			return ((::System::Array*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVEARRAY_OFFSET))(r, count);
		}

		static ::System::Collections::IList* ReadPrimitiveList(::System::IO::BinaryReader* r)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVELIST_OFFSET))(r);
		}

		static ::System::Collections::IList* ReadSerialiserArray(::System::IO::BinaryReader* br, ::System::Int32 count)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READSERIALISERARRAY_OFFSET))(br, count);
		}

		static ::System::Collections::IList* ReadUserStructArray(::System::IO::BinaryReader* br, ::System::Int32 count)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READUSERSTRUCTARRAY_OFFSET))(br, count);
		}

		static ::System::Void ReadPrimitives(::System::IO::BinaryReader* r, ::System::Collections::IList* array, ::System::Int32 count, ::Hdg::SerialisationHelpers_PrimitiveType primitiveType)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::IList*, ::System::Int32, ::Hdg::SerialisationHelpers_PrimitiveType))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVES_OFFSET))(r, array, count, primitiveType);
		}

		static ::System::Object* ReadPrimitive(::System::IO::BinaryReader* r)
		{
			return ((::System::Object*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVE_OFFSET))(r);
		}
	};
}
