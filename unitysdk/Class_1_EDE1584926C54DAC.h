#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GMAccountEquipmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EDE1584926C54DAC_METHOD_1_054F4C4070EA87CD_OFFSET UNITYSDK_OFFSET(0x18DAFA10)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18DAFFB0)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_1AAEFD7877558FB0_OFFSET UNITYSDK_OFFSET(0x18DAF6E0)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_1E8EE339A67FF29C_OFFSET UNITYSDK_OFFSET(0x18DB0000)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DAFDD0)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18DAF760)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18DAFE70)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18DAF9B0)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DAFD90)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18DAFF10)
#define CLASS_1_EDE1584926C54DAC_METHOD_1_F9B29FE7F057072E_OFFSET UNITYSDK_OFFSET(0x18DAFBC0)
#define CLASS_1_EDE1584926C54DAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DB0360)

inline static constexpr unsigned int Class_1_EDE1584926C54DAC_TypeDefinitionIndex = 12617;

class Class_1_EDE1584926C54DAC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDE1584926C54DAC_TypeDefinitionIndex)->GetStaticField(0x281D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDE1584926C54DAC_TypeDefinitionIndex)->GetStaticField(0x281D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDE1584926C54DAC_TypeDefinitionIndex)->GetStaticField(0x281E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDE1584926C54DAC_TypeDefinitionIndex)->GetStaticField(0xAA00);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDE1584926C54DAC_TypeDefinitionIndex)->GetStaticField(0xAA01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>* Method_1_1AAEFD7877558FB0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_1AAEFD7877558FB0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*> Method_1_054F4C4070EA87CD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_054F4C4070EA87CD_OFFSET))();
	}

	static ::RPG::GameCore::GMAccountEquipmentConfigRow* Method_1_F9B29FE7F057072E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GMAccountEquipmentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_F9B29FE7F057072E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E8EE339A67FF29C(::RPG::GameCore::GMAccountEquipmentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GMAccountEquipmentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_EDE1584926C54DAC_METHOD_1_1E8EE339A67FF29C_OFFSET))(a1);
	}
};
