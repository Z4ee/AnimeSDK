#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19EBF090)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_53E26D229922CD13_OFFSET UNITYSDK_OFFSET(0x19EBECD0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19EBEEC0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19EBEF50)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_B1CA7B56957D1D31_OFFSET UNITYSDK_OFFSET(0x19EBF0E0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CA9D9EF85F4EEC63_OFFSET UNITYSDK_OFFSET(0x19EBE850)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19EBEB00)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_D9563C4E1955CCE0_OFFSET UNITYSDK_OFFSET(0x19EBEB60)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19EBE8D0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19EBEE80)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19EBEFF0)
#define CLASS_1_8A7CDE07FC7CBBA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EBF450)

inline static constexpr unsigned int Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex = 12468;

class Class_1_8A7CDE07FC7CBBA3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x4F280);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x4F288);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x4F290);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0xF5E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0xF5E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>* Method_1_CA9D9EF85F4EEC63()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CA9D9EF85F4EEC63_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*> Method_1_D9563C4E1955CCE0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_D9563C4E1955CCE0_OFFSET))();
	}

	static ::RPG::GameCore::CutSceneConfigRow* Method_1_53E26D229922CD13(::System::String* a1)
	{
		return ((::RPG::GameCore::CutSceneConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_53E26D229922CD13_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1CA7B56957D1D31(::RPG::GameCore::CutSceneConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_B1CA7B56957D1D31_OFFSET))(a1);
	}
};
