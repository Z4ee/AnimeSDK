#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/Struct_2_6765FFF36726974B.h"
#include "unitysdk/System/Object.h"

class Class_1_ADC27DBA8547EDD7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11A601EC692AC3BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B8A330)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x11B8A4F0)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_633B772C38E98D22_OFFSET UNITYSDK_OFFSET(0x11B8AA30)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x11B8A410)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_896C6AFD38BFC925_OFFSET UNITYSDK_OFFSET(0x11B8AE00)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_ABE95EED555A76D3_OFFSET UNITYSDK_OFFSET(0x11B8AC60)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x11B8A720)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_C9620F36E4424808_OFFSET UNITYSDK_OFFSET(0x11B8A800)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_DF87487B7A5A485C_OFFSET UNITYSDK_OFFSET(0x11B8A550)
#define CLASS_1_11A601EC692AC3BC_METHOD_1_F7CD01B30A4DFC65_OFFSET UNITYSDK_OFFSET(0x11B8A9A0)
#define CLASS_1_11A601EC692AC3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8A270)

inline static constexpr unsigned int Class_1_11A601EC692AC3BC_TypeDefinitionIndex = 70289;

class Class_1_11A601EC692AC3BC : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11A601EC692AC3BC_TypeDefinitionIndex)->GetStaticField(0xA740);
	}
	::System::Collections::Generic::List_1<::Class_1_ADC27DBA8547EDD7*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ADC27DBA8547EDD7*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_ADC27DBA8547EDD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADC27DBA8547EDD7*))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF87487B7A5A485C(::Struct_2_6765FFF36726974B a1, ::System::Collections::Generic::List_1<::Class_1_ADC27DBA8547EDD7*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Collections::Generic::List_1<::Class_1_ADC27DBA8547EDD7*>*&))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_DF87487B7A5A485C_OFFSET))(this, a1, a2);
	}

	::Class_1_ADC27DBA8547EDD7* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_ADC27DBA8547EDD7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::Class_1_ADC27DBA8547EDD7* Method_1_C9620F36E4424808(::Struct_2_6765FFF36726974B a1)
	{
		return ((::Class_1_ADC27DBA8547EDD7*(*)(::PVOID, ::Struct_2_6765FFF36726974B))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_C9620F36E4424808_OFFSET))(this, a1);
	}

	::Class_1_ADC27DBA8547EDD7* Method_1_F7CD01B30A4DFC65(::Struct_2_6765FFF36726974B a1, ::System::Int32& a2)
	{
		return ((::Class_1_ADC27DBA8547EDD7*(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_F7CD01B30A4DFC65_OFFSET))(this, a1, a2);
	}

	::Class_1_ADC27DBA8547EDD7* Method_1_633B772C38E98D22(::Struct_2_6765FFF36726974B a1, ::System::Int32& a2)
	{
		return ((::Class_1_ADC27DBA8547EDD7*(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_633B772C38E98D22_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_ABE95EED555A76D3(::Class_1_ADC27DBA8547EDD7* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
	{
		return ((::System::Int32(*)(::Class_1_ADC27DBA8547EDD7*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_ABE95EED555A76D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_896C6AFD38BFC925(::Class_1_ADC27DBA8547EDD7* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
	{
		return ((::System::Int32(*)(::Class_1_ADC27DBA8547EDD7*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_11A601EC692AC3BC_METHOD_1_896C6AFD38BFC925_OFFSET))(a1, a2, a3);
	}
};
