#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_E87F1D15F1D4AC72;
class Class_3_A9098CF80773ED2D;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZoneHistoryTagWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F38F656D58175E9F_METHOD_2_2609A581167F3840_OFFSET UNITYSDK_OFFSET(0x10B21050)
#define CLASS_2_F38F656D58175E9F_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x10B21650)
#define CLASS_2_F38F656D58175E9F_METHOD_2_B8DF6CE7B613A5F1_OFFSET UNITYSDK_OFFSET(0x10B20DB0)
#define CLASS_2_F38F656D58175E9F_METHOD_2_C43ABBDCD527B5F2_OFFSET UNITYSDK_OFFSET(0x10B216E0)
#define CLASS_2_F38F656D58175E9F_METHOD_2_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x10B20F90)
#define CLASS_2_F38F656D58175E9F_METHOD_2_EA225BCEB91C22C6_OFFSET UNITYSDK_OFFSET(0x10B20290)
#define CLASS_2_F38F656D58175E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B21600)

inline static constexpr unsigned int Class_2_F38F656D58175E9F_TypeDefinitionIndex = 83808;

class Class_2_F38F656D58175E9F : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_1; // 0x50
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_0; // 0x58
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EA225BCEB91C22C6(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_EA225BCEB91C22C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B8DF6CE7B613A5F1(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_B8DF6CE7B613A5F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2609A581167F3840(::System::Collections::Generic::List_1<::Class_3_A9098CF80773ED2D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_A9098CF80773ED2D*>*))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_2609A581167F3840_OFFSET))(this, a1);
	}

	::Class_2_468A4FBF2E9F527C* Method_2_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_468A4FBF2E9F527C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_C43ABBDCD527B5F2(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_F38F656D58175E9F_METHOD_2_C43ABBDCD527B5F2_OFFSET))(this, a1);
	}
};
