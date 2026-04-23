#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournDivisionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19070320)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19022AA0)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_354A0DAA10D09657_OFFSET UNITYSDK_OFFSET(0x19070370)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_3B5F691546426B9A_OFFSET UNITYSDK_OFFSET(0x1906FDC0)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_4612AFCF89A59704_OFFSET UNITYSDK_OFFSET(0x1906FEA0)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_48CE6D2287432569_OFFSET UNITYSDK_OFFSET(0x19070020)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FDD420)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x190701E0)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1906FE40)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x190701A0)
#define CLASS_1_6FE0A93A443D4DDA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19070280)
#define CLASS_1_6FE0A93A443D4DDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19070680)

inline static constexpr unsigned int Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex = 14159;

class Class_1_6FE0A93A443D4DDA : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex)->GetStaticField(0x3E260);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex)->GetStaticField(0x3E268);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex)->GetStaticField(0x3E270);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex)->GetStaticField(0xDE30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FE0A93A443D4DDA_TypeDefinitionIndex)->GetStaticField(0xDE31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>* Method_1_3B5F691546426B9A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_3B5F691546426B9A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*> Method_1_4612AFCF89A59704()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_4612AFCF89A59704_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournDivisionRow* Method_1_48CE6D2287432569(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournDivisionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_48CE6D2287432569_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_354A0DAA10D09657(::RPG::GameCore::RogueTournDivisionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournDivisionRow*))((::PBYTE)hIl2Cpp + CLASS_1_6FE0A93A443D4DDA_METHOD_1_354A0DAA10D09657_OFFSET))(a1);
	}
};
