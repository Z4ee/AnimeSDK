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

#define HDG_SERIALISATIONHELPERS_READLIST_OFFSET UNITYSDK_OFFSET(0x16A598B0)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x16A59A80)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVELIST_OFFSET UNITYSDK_OFFSET(0x16A5DE50)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x16A5A040)
#define HDG_SERIALISATIONHELPERS_READPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x16A5E450)
#define HDG_SERIALISATIONHELPERS_READSERIALISERARRAY_OFFSET UNITYSDK_OFFSET(0x16A59BD0)
#define HDG_SERIALISATIONHELPERS_READUSERSTRUCTARRAY_OFFSET UNITYSDK_OFFSET(0x16A59F40)
#define HDG_SERIALISATIONHELPERS_WRITELIST_OFFSET UNITYSDK_OFFSET(0x16A55DA0)
#define HDG_SERIALISATIONHELPERS_WRITEPRIMITIVELIST_OFFSET UNITYSDK_OFFSET(0x16A561E0)
#define HDG_SERIALISATIONHELPERS_WRITEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x16A58D70)
#define HDG_SERIALISATIONHELPERS_WRITESERIALISERLIST_OFFSET UNITYSDK_OFFSET(0x16A57E40)
#define HDG_SERIALISATIONHELPERS_WRITEUSERSTRUCTLIST_OFFSET UNITYSDK_OFFSET(0x16A58410)
#define HDG_SERIALISATIONHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5ECE0)

namespace Hdg
{
	inline static constexpr unsigned int SerialisationHelpers_TypeDefinitionIndex = 47402;

	class SerialisationHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_PrimitiveTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(SerialisationHelpers_TypeDefinitionIndex)->GetStaticField(0x405F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Void WriteList(::System::IO::BinaryWriter* a1, ::System::Collections::IList* a2, ::Hdg::SerialisationHelpers_ArrayElementType a3)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*, ::Hdg::SerialisationHelpers_ArrayElementType))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITELIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WritePrimitiveList(::System::IO::BinaryWriter* a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEPRIMITIVELIST_OFFSET))(a1, a2);
		}

		static ::System::Void WriteSerialiserList(::System::IO::BinaryWriter* a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITESERIALISERLIST_OFFSET))(a1, a2);
		}

		static ::System::Void WriteUserStructList(::System::IO::BinaryWriter* a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEUSERSTRUCTLIST_OFFSET))(a1, a2);
		}

		static ::System::Void WritePrimitive(::System::IO::BinaryWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_WRITEPRIMITIVE_OFFSET))(a1, a2);
		}

		static ::System::Void ReadList(::System::IO::BinaryReader* a1, ::System::Collections::IList*& a2, ::Hdg::SerialisationHelpers_ArrayElementType& a3)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::IList*&, ::Hdg::SerialisationHelpers_ArrayElementType&))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Array* ReadPrimitiveArray(::System::IO::BinaryReader* a1, ::System::Int32 a2)
		{
			return ((::System::Array*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Collections::IList* ReadPrimitiveList(::System::IO::BinaryReader* a1)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVELIST_OFFSET))(a1);
		}

		static ::System::Collections::IList* ReadSerialiserArray(::System::IO::BinaryReader* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READSERIALISERARRAY_OFFSET))(a1, a2);
		}

		static ::System::Collections::IList* ReadUserStructArray(::System::IO::BinaryReader* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IList*(*)(::System::IO::BinaryReader*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READUSERSTRUCTARRAY_OFFSET))(a1, a2);
		}

		static ::System::Void ReadPrimitives(::System::IO::BinaryReader* a1, ::System::Collections::IList* a2, ::System::Int32 a3, ::Hdg::SerialisationHelpers_PrimitiveType a4)
		{
			return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::IList*, ::System::Int32, ::Hdg::SerialisationHelpers_PrimitiveType))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Object* ReadPrimitive(::System::IO::BinaryReader* a1)
		{
			return ((::System::Object*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_SERIALISATIONHELPERS_READPRIMITIVE_OFFSET))(a1);
		}
	};
}
