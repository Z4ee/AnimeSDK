#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveQuestTreeTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7019CE92F6C74B56_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18203440)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_30C53FC3BCC0F6FB_OFFSET UNITYSDK_OFFSET(0x18203490)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18203260)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_5C7278566F8D4AB8_OFFSET UNITYSDK_OFFSET(0x18202ED0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18202C20)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_960AE2D935E76286_OFFSET UNITYSDK_OFFSET(0x18202BA0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18203300)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_B9732A588F41A3CC_OFFSET UNITYSDK_OFFSET(0x18203050)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18202E70)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18203220)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182033A0)
#define CLASS_1_7019CE92F6C74B56__CCTOR_OFFSET UNITYSDK_OFFSET(0x182037A0)

inline static constexpr unsigned int Class_1_7019CE92F6C74B56_TypeDefinitionIndex = 11174;

class Class_1_7019CE92F6C74B56 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x208F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x208F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x20900);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x7EE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x7EE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>* Method_1_960AE2D935E76286()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_960AE2D935E76286_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*> Method_1_5C7278566F8D4AB8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_5C7278566F8D4AB8_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveQuestTreeTabRow* Method_1_B9732A588F41A3CC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveQuestTreeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_B9732A588F41A3CC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_30C53FC3BCC0F6FB(::RPG::GameCore::IdleLiveQuestTreeTabRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestTreeTabRow*))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_30C53FC3BCC0F6FB_OFFSET))(a1);
	}
};
