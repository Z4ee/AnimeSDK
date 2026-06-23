#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsMetaType_ObjectGenerator; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC4E090)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4E0D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__GETGENERATOR_B__21_3_OFFSET UNITYSDK_OFFSET(0x1CC4E0E0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMetaType___c_TypeDefinitionIndex = 29653;

	class fsMetaType___c : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::FullSerializer::fsMetaType_ObjectGenerator** StaticGet___9__21_3()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsMetaType_ObjectGenerator**)Il2CppClass::FromTypeDefinitionIndex(fsMetaType___c_TypeDefinitionIndex)->GetStaticField(0x24030);
		}
		static ::ParadoxNotion::Serialization::FullSerializer::fsMetaType___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsMetaType___c**)Il2CppClass::FromTypeDefinitionIndex(fsMetaType___c_TypeDefinitionIndex)->GetStaticField(0x24038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__CTOR_OFFSET))(this);
		}

		::System::Object* _GetGenerator_b__21_3()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE___C__GETGENERATOR_B__21_3_OFFSET))(this);
		}
	};
}
