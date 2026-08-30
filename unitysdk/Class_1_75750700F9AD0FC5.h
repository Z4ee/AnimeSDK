#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_75750700F9AD0FC5_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C7FF850)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_315B65196E5F1092_OFFSET UNITYSDK_OFFSET(0x1C7FF380)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_523E9F1C7D4314A4_OFFSET UNITYSDK_OFFSET(0x1C7FF4F0)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_5DDBF75720787F49_OFFSET UNITYSDK_OFFSET(0x1C7FF070)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7FF680)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_935A56298EB49D86_OFFSET UNITYSDK_OFFSET(0x1C7FF8A0)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7FF710)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7FF320)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7FF0F0)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7FF640)
#define CLASS_1_75750700F9AD0FC5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7FF7B0)
#define CLASS_1_75750700F9AD0FC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7FFBC0)

inline static constexpr unsigned int Class_1_75750700F9AD0FC5_TypeDefinitionIndex = 12081;

class Class_1_75750700F9AD0FC5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75750700F9AD0FC5_TypeDefinitionIndex)->GetStaticField(0xF520);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75750700F9AD0FC5_TypeDefinitionIndex)->GetStaticField(0xF528);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75750700F9AD0FC5_TypeDefinitionIndex)->GetStaticField(0xF530);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_75750700F9AD0FC5_TypeDefinitionIndex)->GetStaticField(0x6AB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_75750700F9AD0FC5_TypeDefinitionIndex)->GetStaticField(0x6AB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>* Method_1_5DDBF75720787F49()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_5DDBF75720787F49_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*> Method_1_315B65196E5F1092()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_315B65196E5F1092_OFFSET))();
	}

	static ::RPG::GameCore::PixAirSkillRow* Method_1_523E9F1C7D4314A4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PixAirSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_523E9F1C7D4314A4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_935A56298EB49D86(::RPG::GameCore::PixAirSkillRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_75750700F9AD0FC5_METHOD_1_935A56298EB49D86_OFFSET))(a1);
	}
};
