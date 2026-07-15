#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleMatchPlayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6895DCA45CD2B034_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B58B3A0)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_3B372BD3D7537139_OFFSET UNITYSDK_OFFSET(0x1B58AE90)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B58B1D0)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_8E5FAB84B0812ADD_OFFSET UNITYSDK_OFFSET(0x1B58B000)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B58B260)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_B9B674541309CEB4_OFFSET UNITYSDK_OFFSET(0x1B58B3F0)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_C4F6CC6914C82C18_OFFSET UNITYSDK_OFFSET(0x1B58AB80)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B58AE30)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B58AC00)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B58B190)
#define CLASS_1_6895DCA45CD2B034_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B58B300)
#define CLASS_1_6895DCA45CD2B034__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B58B760)

inline static constexpr unsigned int Class_1_6895DCA45CD2B034_TypeDefinitionIndex = 11462;

class Class_1_6895DCA45CD2B034 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6895DCA45CD2B034_TypeDefinitionIndex)->GetStaticField(0x9780);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6895DCA45CD2B034_TypeDefinitionIndex)->GetStaticField(0x9788);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6895DCA45CD2B034_TypeDefinitionIndex)->GetStaticField(0x9790);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6895DCA45CD2B034_TypeDefinitionIndex)->GetStaticField(0x38F0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6895DCA45CD2B034_TypeDefinitionIndex)->GetStaticField(0x38F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>* Method_1_C4F6CC6914C82C18()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_C4F6CC6914C82C18_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*> Method_1_3B372BD3D7537139()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_3B372BD3D7537139_OFFSET))();
	}

	static ::RPG::GameCore::MarbleMatchPlayerRow* Method_1_8E5FAB84B0812ADD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleMatchPlayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_8E5FAB84B0812ADD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B9B674541309CEB4(::RPG::GameCore::MarbleMatchPlayerRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleMatchPlayerRow*))((::PBYTE)hIl2Cpp + CLASS_1_6895DCA45CD2B034_METHOD_1_B9B674541309CEB4_OFFSET))(a1);
	}
};
