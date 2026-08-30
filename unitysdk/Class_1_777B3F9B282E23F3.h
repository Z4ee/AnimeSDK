#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageInvasionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_777B3F9B282E23F3_METHOD_1_1024CDA1E1886068_OFFSET UNITYSDK_OFFSET(0x1C751330)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1C751060)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_33F68CBA78A78894_OFFSET UNITYSDK_OFFSET(0x1C7512C0)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x1C751120)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_71C13617F3F8EEA0_OFFSET UNITYSDK_OFFSET(0x1C7519E0)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_748B8A2AB3F1AB26_OFFSET UNITYSDK_OFFSET(0x1C7511F0)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_C9C55EBFD5AF05EB_OFFSET UNITYSDK_OFFSET(0x1C751830)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1C7517B0)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C750D20)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_D6847A87EC23F6DA_OFFSET UNITYSDK_OFFSET(0x1C7516A0)
#define CLASS_1_777B3F9B282E23F3_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1C750D80)
#define CLASS_1_777B3F9B282E23F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C751BD0)

inline static constexpr unsigned int Class_1_777B3F9B282E23F3_TypeDefinitionIndex = 14996;

class Class_1_777B3F9B282E23F3 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_777B3F9B282E23F3_TypeDefinitionIndex)->GetStaticField(0x278A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_777B3F9B282E23F3_TypeDefinitionIndex)->GetStaticField(0x278A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_777B3F9B282E23F3_TypeDefinitionIndex)->GetStaticField(0x278B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_777B3F9B282E23F3_TypeDefinitionIndex)->GetStaticField(0xBA50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_777B3F9B282E23F3_TypeDefinitionIndex)->GetStaticField(0xBA51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_F7BA13C72A6B3F58_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_5AD297B90767E73A_OFFSET))(a1);
	}

	static ::System::Void Method_1_748B8A2AB3F1AB26(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_748B8A2AB3F1AB26_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_33F68CBA78A78894(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_33F68CBA78A78894_OFFSET))(a1);
	}

	static ::System::Void Method_1_1024CDA1E1886068(::RPG::GameCore::StageInvasionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StageInvasionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_1024CDA1E1886068_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>* Method_1_D6847A87EC23F6DA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_D6847A87EC23F6DA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*> Method_1_C9C55EBFD5AF05EB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_C9C55EBFD5AF05EB_OFFSET))();
	}

	static ::RPG::GameCore::StageInvasionConfigRow* Method_1_71C13617F3F8EEA0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::StageInvasionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_777B3F9B282E23F3_METHOD_1_71C13617F3F8EEA0_OFFSET))(a1);
	}
};
