#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FinishTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CA5E0BD7673D0516_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B812CD0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_2F4119131658949E_OFFSET UNITYSDK_OFFSET(0x1B812930)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_312F8B9217D9BF72_OFFSET UNITYSDK_OFFSET(0x1B812D20)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_6AC8CDC396A62727_OFFSET UNITYSDK_OFFSET(0x1B8127C0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_7F91ACB21CF5D95E_OFFSET UNITYSDK_OFFSET(0x1B8124B0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B812B00)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B812B90)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B812760)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B812530)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B812AC0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B812C30)
#define CLASS_1_CA5E0BD7673D0516__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B813090)

inline static constexpr unsigned int Class_1_CA5E0BD7673D0516_TypeDefinitionIndex = 13635;

class Class_1_CA5E0BD7673D0516 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x654D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x654D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x654E0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x137C0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x137C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>* Method_1_7F91ACB21CF5D95E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_7F91ACB21CF5D95E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*> Method_1_6AC8CDC396A62727()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_6AC8CDC396A62727_OFFSET))();
	}

	static ::RPG::GameCore::FinishTypeConfigRow* Method_1_2F4119131658949E(::RPG::GameCore::QuestFinishType a1)
	{
		return ((::RPG::GameCore::FinishTypeConfigRow*(*)(::RPG::GameCore::QuestFinishType))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_2F4119131658949E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_312F8B9217D9BF72(::RPG::GameCore::FinishTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FinishTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_312F8B9217D9BF72_OFFSET))(a1);
	}
};
