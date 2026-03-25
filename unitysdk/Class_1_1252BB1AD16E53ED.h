#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1252BB1AD16E53ED_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1792FFA0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1792FDC0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_519BA4AED24C8AF7_OFFSET UNITYSDK_OFFSET(0x1792FFF0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1792F750)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_A518C3B8E3EDA305_OFFSET UNITYSDK_OFFSET(0x1792FBB0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1792FE60)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1792F9A0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_DCE39724FF27BFC1_OFFSET UNITYSDK_OFFSET(0x1792F6D0)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1792FD80)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1792FF00)
#define CLASS_1_1252BB1AD16E53ED_METHOD_1_FFDDF4AA6018841E_OFFSET UNITYSDK_OFFSET(0x1792FA00)
#define CLASS_1_1252BB1AD16E53ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x17930350)

inline static constexpr unsigned int Class_1_1252BB1AD16E53ED_TypeDefinitionIndex = 13100;

class Class_1_1252BB1AD16E53ED : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1252BB1AD16E53ED_TypeDefinitionIndex)->GetStaticField(0x22D20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1252BB1AD16E53ED_TypeDefinitionIndex)->GetStaticField(0x22D28);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1252BB1AD16E53ED_TypeDefinitionIndex)->GetStaticField(0x22D30);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1252BB1AD16E53ED_TypeDefinitionIndex)->GetStaticField(0x9190);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1252BB1AD16E53ED_TypeDefinitionIndex)->GetStaticField(0x9191);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>* Method_1_DCE39724FF27BFC1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_DCE39724FF27BFC1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*> Method_1_FFDDF4AA6018841E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_FFDDF4AA6018841E_OFFSET))();
	}

	static ::RPG::GameCore::PamActionRow* Method_1_A518C3B8E3EDA305(::RPG::GameCore::PamActionType a1)
	{
		return ((::RPG::GameCore::PamActionRow*(*)(::RPG::GameCore::PamActionType))((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_A518C3B8E3EDA305_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_519BA4AED24C8AF7(::RPG::GameCore::PamActionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamActionRow*))((::PBYTE)hIl2Cpp + CLASS_1_1252BB1AD16E53ED_METHOD_1_519BA4AED24C8AF7_OFFSET))(a1);
	}
};
