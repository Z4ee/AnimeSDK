#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D694B2FE164C36B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18357EB0)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18357CD0)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_6859AF6485DE66FB_OFFSET UNITYSDK_OFFSET(0x183575E0)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18357660)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_7F42BA1068DDE869_OFFSET UNITYSDK_OFFSET(0x18357F00)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18357D70)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_B169A3A00F002578_OFFSET UNITYSDK_OFFSET(0x18357910)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_C81E70EDC28E327D_OFFSET UNITYSDK_OFFSET(0x18357AC0)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183578B0)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18357C90)
#define CLASS_1_6D694B2FE164C36B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18357E10)
#define CLASS_1_6D694B2FE164C36B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18358260)

inline static constexpr unsigned int Class_1_6D694B2FE164C36B_TypeDefinitionIndex = 11753;

class Class_1_6D694B2FE164C36B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D694B2FE164C36B_TypeDefinitionIndex)->GetStaticField(0x2A0A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D694B2FE164C36B_TypeDefinitionIndex)->GetStaticField(0x2A0A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D694B2FE164C36B_TypeDefinitionIndex)->GetStaticField(0x2A0B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D694B2FE164C36B_TypeDefinitionIndex)->GetStaticField(0xB380);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D694B2FE164C36B_TypeDefinitionIndex)->GetStaticField(0xB381);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>* Method_1_6859AF6485DE66FB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_6859AF6485DE66FB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*> Method_1_B169A3A00F002578()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_B169A3A00F002578_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingEffectRow* Method_1_C81E70EDC28E327D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_C81E70EDC28E327D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F42BA1068DDE869(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_6D694B2FE164C36B_METHOD_1_7F42BA1068DDE869_OFFSET))(a1);
	}
};
