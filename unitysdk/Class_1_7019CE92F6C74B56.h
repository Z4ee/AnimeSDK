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

#define CLASS_1_7019CE92F6C74B56_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F613D0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_30C53FC3BCC0F6FB_OFFSET UNITYSDK_OFFSET(0x18F61420)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_84EAFB0A8C887AEA_OFFSET UNITYSDK_OFFSET(0x18F60F00)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F61200)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_960AE2D935E76286_OFFSET UNITYSDK_OFFSET(0x18F60BF0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F61290)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F60EA0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F60C70)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F611C0)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F61330)
#define CLASS_1_7019CE92F6C74B56_METHOD_1_FA2E16B90BF1B887_OFFSET UNITYSDK_OFFSET(0x18F61030)
#define CLASS_1_7019CE92F6C74B56__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F61740)

inline static constexpr unsigned int Class_1_7019CE92F6C74B56_TypeDefinitionIndex = 11222;

class Class_1_7019CE92F6C74B56 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x36030);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x36038);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0x36040);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0xAC30);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7019CE92F6C74B56_TypeDefinitionIndex)->GetStaticField(0xAC31);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*> Method_1_84EAFB0A8C887AEA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_84EAFB0A8C887AEA_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveQuestTreeTabRow* Method_1_FA2E16B90BF1B887(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveQuestTreeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_FA2E16B90BF1B887_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7019CE92F6C74B56_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
