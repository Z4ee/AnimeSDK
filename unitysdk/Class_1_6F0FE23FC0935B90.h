#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F0FE23FC0935B90_Struct_2_1BEBF382E9F6AC1D.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/Struct_2_126FCF6D29887CE8.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_541;
class Class_3_2CA3754E0AA55F4B;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6F0FE23FC0935B90_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1760A040)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_0E9948759545C5D3_OFFSET UNITYSDK_OFFSET(0x1760A590)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_0F29DB2C983A3B9B_OFFSET UNITYSDK_OFFSET(0x1760A400)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x17609500)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17609210)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17609EB0)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_5FC3BCA37EB6E8CE_OFFSET UNITYSDK_OFFSET(0x1760A1E0)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_A810A811EFCE6D6A_OFFSET UNITYSDK_OFFSET(0x1760A4B0)
#define CLASS_1_6F0FE23FC0935B90_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x17609280)
#define CLASS_1_6F0FE23FC0935B90__CCTOR_OFFSET UNITYSDK_OFFSET(0x1760A9C0)
#define CLASS_1_6F0FE23FC0935B90__CTOR_OFFSET UNITYSDK_OFFSET(0x1760A7D0)

inline static constexpr unsigned int Class_1_6F0FE23FC0935B90_TypeDefinitionIndex = 53461;

class Class_1_6F0FE23FC0935B90 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_6F0FE23FC0935B90_Struct_2_1BEBF382E9F6AC1D>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_6F0FE23FC0935B90_Struct_2_1BEBF382E9F6AC1D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F0FE23FC0935B90_TypeDefinitionIndex)->GetStaticField(0x60F50);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::Class_0_16E4307DCC419505_541*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::System::Type*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::Class_3_2CA3754E0AA55F4B*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_541*>* Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90__CCTOR_OFFSET))();
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::RPG::GameCore::FateRinKeywordEventType Method_1_5FC3BCA37EB6E8CE(::System::Type* a1)
	{
		return ((::RPG::GameCore::FateRinKeywordEventType(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_5FC3BCA37EB6E8CE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_541* Method_1_0F29DB2C983A3B9B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_541*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_0F29DB2C983A3B9B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_541* Method_1_A810A811EFCE6D6A(::RPG::GameCore::FateRinKeywordEventType a1)
	{
		return ((::Class_0_16E4307DCC419505_541*(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_A810A811EFCE6D6A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0E9948759545C5D3(::Class_0_16E4307DCC419505_541* a1, ::RPG::GameCore::FateRinKeywordEventType a2, ::Struct_2_126FCF6D29887CE8 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_541*, ::RPG::GameCore::FateRinKeywordEventType, ::Struct_2_126FCF6D29887CE8))((::PBYTE)hIl2Cpp + CLASS_1_6F0FE23FC0935B90_METHOD_1_0E9948759545C5D3_OFFSET))(this, a1, a2, a3);
	}
};
