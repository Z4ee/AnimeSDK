#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_0E28829D89247089_OFFSET UNITYSDK_OFFSET(0x1773CDE0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x1773E080)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x1773EF00)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_64C087B1FF774DAB_OFFSET UNITYSDK_OFFSET(0x1773D410)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_8A386743A24BA31C_OFFSET UNITYSDK_OFFSET(0x1773E5E0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_8A7D35010CF75DA7_OFFSET UNITYSDK_OFFSET(0x1773E3E0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_1_OFFSET UNITYSDK_OFFSET(0x1773DE20)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_2_OFFSET UNITYSDK_OFFSET(0x1773E920)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_OFFSET UNITYSDK_OFFSET(0x1773D220)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_A86DA876392BF313_OFFSET UNITYSDK_OFFSET(0x1773ED00)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_BC0CD150F1484809_OFFSET UNITYSDK_OFFSET(0x1773EF90)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_BD67A73B71A84810_OFFSET UNITYSDK_OFFSET(0x1773D570)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C38DFFBF91CDB9A2_OFFSET UNITYSDK_OFFSET(0x1773E1D0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x1773E000)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C9167BEAC1211147_OFFSET UNITYSDK_OFFSET(0x1773EB00)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_E77A54A5EC5D74F1_OFFSET UNITYSDK_OFFSET(0x1773D8C0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_EEE45595807DF952_OFFSET UNITYSDK_OFFSET(0x1773F2E0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_EFA439876BD6A502_OFFSET UNITYSDK_OFFSET(0x1773CEE0)
#define CLASS_1_1CF98A7B2A19D5D8_METHOD_1_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x1773CB80)
#define CLASS_1_1CF98A7B2A19D5D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1773C5E0)

inline static constexpr unsigned int Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex = 80224;

class Class_1_1CF98A7B2A19D5D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44010);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44018);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44020);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44028);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44030);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44038);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44040);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44048);
	}
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44050);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44058);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF98A7B2A19D5D8_TypeDefinitionIndex)->GetStaticField(0x44060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FCB175EE4400634C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_FCB175EE4400634C_OFFSET))();
	}

	static ::System::Boolean Method_1_0E28829D89247089(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* a3, ::MoleMole::SkillCharacterScriptConfig*& a4)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_0E28829D89247089_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_9128ED0469B267DC(::System::UInt32 a1)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_OFFSET))(a1);
	}

	static ::MoleMole::CharacterScriptConfig* Method_1_64C087B1FF774DAB(::System::UInt32 a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_64C087B1FF774DAB_OFFSET))(a1, a2);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_9128ED0469B267DC_1(::System::UInt32 a1)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C6159FCF4A6D407A_OFFSET))();
	}

	static ::Foundation::AssetPath Method_1_C38DFFBF91CDB9A2(::MoleMole::Config::EntityType a1, ::System::UInt32 a2)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Config::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C38DFFBF91CDB9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A7D35010CF75DA7(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_8A7D35010CF75DA7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EFA439876BD6A502(::System::UInt32 a1, ::Foundation::AssetPath a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* a3, ::MoleMole::SkillCharacterScriptConfig*& a4)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Foundation::AssetPath, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_EFA439876BD6A502_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_8A386743A24BA31C(::Foundation::AssetPath a1)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_8A386743A24BA31C_OFFSET))(a1);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_9128ED0469B267DC_2(::System::UInt32 a1)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_9128ED0469B267DC_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9167BEAC1211147(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_C9167BEAC1211147_OFFSET))(a1);
	}

	static ::System::Void Method_1_A86DA876392BF313(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_A86DA876392BF313_OFFSET))(a1);
	}

	static ::MoleMole::CharacterScriptConfig* Method_1_BD67A73B71A84810(::System::UInt32 a1, ::Foundation::AssetPath a2)
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::System::UInt32, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_BD67A73B71A84810_OFFSET))(a1, a2);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_E77A54A5EC5D74F1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_E77A54A5EC5D74F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DDD10252C795DC3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_1DDD10252C795DC3_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BC0CD150F1484809(::Foundation::AssetPath a1, ::MoleMole::SkillCharacterScriptConfig*& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_BC0CD150F1484809_OFFSET))(a1, a2);
	}

	static ::MoleMole::SkillCharacterScriptConfig* Method_1_EEE45595807DF952(::MoleMole::Config::EntityType a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::MoleMole::Config::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CF98A7B2A19D5D8_METHOD_1_EEE45595807DF952_OFFSET))(a1, a2);
	}
};
