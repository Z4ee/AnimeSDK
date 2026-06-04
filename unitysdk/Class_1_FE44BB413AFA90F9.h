#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE44BB413AFA90F9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x195A9420)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_499D396BC6A8FF0D_OFFSET UNITYSDK_OFFSET(0x195A8C80)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_60917FD20E1F88C0_OFFSET UNITYSDK_OFFSET(0x195A90C0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_7BDB6D4E5F885352_OFFSET UNITYSDK_OFFSET(0x195A9470)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x195A9250)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x195A92E0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_B60A9AA05A0EBE8B_OFFSET UNITYSDK_OFFSET(0x195A8F90)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x195A8F30)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x195A8D00)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x195A9210)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x195A9380)
#define CLASS_1_FE44BB413AFA90F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x195A9790)

inline static constexpr unsigned int Class_1_FE44BB413AFA90F9_TypeDefinitionIndex = 12626;

class Class_1_FE44BB413AFA90F9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x43850);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x43858);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x43860);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0xBF90);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0xBF91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>* Method_1_499D396BC6A8FF0D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_499D396BC6A8FF0D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*> Method_1_B60A9AA05A0EBE8B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_B60A9AA05A0EBE8B_OFFSET))();
	}

	static ::RPG::GameCore::ExpeditionHarvestDataRow* Method_1_60917FD20E1F88C0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ExpeditionHarvestDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_60917FD20E1F88C0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7BDB6D4E5F885352(::RPG::GameCore::ExpeditionHarvestDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ExpeditionHarvestDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_7BDB6D4E5F885352_OFFSET))(a1);
	}
};
