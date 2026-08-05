#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class TypeConverter_CustomConverter; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PARADOXNOTION_TYPECONVERTER_ADD_CUSTOMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E54C020)
#define PARADOXNOTION_TYPECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E54D780)
#define PARADOXNOTION_TYPECONVERTER_GET_OFFSET UNITYSDK_OFFSET(0x1E54C140)
#define PARADOXNOTION_TYPECONVERTER_REMOVE_CUSTOMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E54C0B0)

namespace ParadoxNotion
{
	inline static constexpr unsigned int TypeConverter_TypeDefinitionIndex = 30560;

	class TypeConverter : public ::System::Object
	{
	public:
		static ::ParadoxNotion::TypeConverter_CustomConverter** StaticGet_customConverter()
		{
			return (::ParadoxNotion::TypeConverter_CustomConverter**)Il2CppClass::FromTypeDefinitionIndex(TypeConverter_TypeDefinitionIndex)->GetStaticField(0x26260);
		}

		static ::System::Void add_customConverter(::ParadoxNotion::TypeConverter_CustomConverter* value)
		{
			return ((::System::Void(*)(::ParadoxNotion::TypeConverter_CustomConverter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_ADD_CUSTOMCONVERTER_OFFSET))(value);
		}

		static ::System::Void remove_customConverter(::ParadoxNotion::TypeConverter_CustomConverter* value)
		{
			return ((::System::Void(*)(::ParadoxNotion::TypeConverter_CustomConverter*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_REMOVE_CUSTOMCONVERTER_OFFSET))(value);
		}

		static ::System::Func_2<::System::Object*, ::System::Object*>* Get(::System::Type* fromType, ::System::Type* toType)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_GET_OFFSET))(fromType, toType);
		}

		static ::System::Boolean CanConvert(::System::Type* fromType, ::System::Type* toType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_CANCONVERT_OFFSET))(fromType, toType);
		}
	};
}
