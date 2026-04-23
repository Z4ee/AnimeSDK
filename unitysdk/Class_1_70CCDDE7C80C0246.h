#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GMAccountConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70CCDDE7C80C0246_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182774B0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182772D0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_437571E2988D49AB_OFFSET UNITYSDK_OFFSET(0x18276F10)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_63CCEE061AABA15C_OFFSET UNITYSDK_OFFSET(0x182770C0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18276C60)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18277370)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_C15B729718078BA6_OFFSET UNITYSDK_OFFSET(0x18276BE0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18276EB0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18277290)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18277410)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_FCE2F93F538A3212_OFFSET UNITYSDK_OFFSET(0x18277500)
#define CLASS_1_70CCDDE7C80C0246__CCTOR_OFFSET UNITYSDK_OFFSET(0x18277860)

inline static constexpr unsigned int Class_1_70CCDDE7C80C0246_TypeDefinitionIndex = 12615;

class Class_1_70CCDDE7C80C0246 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x1C730);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x1C738);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x1C740);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x7570);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x7571);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>* Method_1_C15B729718078BA6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_C15B729718078BA6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*> Method_1_437571E2988D49AB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_437571E2988D49AB_OFFSET))();
	}

	static ::RPG::GameCore::GMAccountConfigRow* Method_1_63CCEE061AABA15C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GMAccountConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_63CCEE061AABA15C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FCE2F93F538A3212(::RPG::GameCore::GMAccountConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GMAccountConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_FCE2F93F538A3212_OFFSET))(a1);
	}
};
