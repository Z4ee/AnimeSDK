#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B547B56320B70AD4_GET_ID_OFFSET UNITYSDK_OFFSET(0x1632C8E0)
#define CLASS_1_B547B56320B70AD4_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1632C8C0)
#define CLASS_1_B547B56320B70AD4_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x1632C8A0)
#define CLASS_1_B547B56320B70AD4_METHOD_1_4792FCD3AEEF1D34_OFFSET UNITYSDK_OFFSET(0x1632D400)
#define CLASS_1_B547B56320B70AD4_METHOD_1_4AF35CCF7882E598_OFFSET UNITYSDK_OFFSET(0x1632CB70)
#define CLASS_1_B547B56320B70AD4_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1632C8F0)
#define CLASS_1_B547B56320B70AD4_METHOD_1_80A751D930F59D01_OFFSET UNITYSDK_OFFSET(0x1632C940)
#define CLASS_1_B547B56320B70AD4_METHOD_1_988F66065AF48634_OFFSET UNITYSDK_OFFSET(0x1632CD30)
#define CLASS_1_B547B56320B70AD4_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1632D4A0)
#define CLASS_1_B547B56320B70AD4_METHOD_1_E7BCAA74CB20DCB6_OFFSET UNITYSDK_OFFSET(0x1632D2E0)
#define CLASS_1_B547B56320B70AD4_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1632D270)
#define CLASS_1_B547B56320B70AD4_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1632C8D0)
#define CLASS_1_B547B56320B70AD4_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x1632C8B0)
#define CLASS_1_B547B56320B70AD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1632CA50)

inline static constexpr unsigned int Class_1_B547B56320B70AD4_TypeDefinitionIndex = 71739;

class Class_1_B547B56320B70AD4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*>* Field_1_0; // 0x10
	::System::Single _Interval_k__BackingField; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Boolean _IsEnded_k__BackingField; // 0x22
	::System::Boolean Field_1_6; // 0x23
	::System::Int32 Field_1_7; // 0x24
	::System::Single Field_1_8; // 0x28
	::System::UInt32 _Id_k__BackingField; // 0x2C
	::System::Int32 Field_1_10; // 0x30
	::System::Single Field_1_11; // 0x34
	::System::UInt32 Field_1_12; // 0x38

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean get_IsEnded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_GET_ISENDED_OFFSET))(this);
	}

	::System::Void set_IsEnded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_SET_ISENDED_OFFSET))(this, a1);
	}

	::System::Single get_Interval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_GET_INTERVAL_OFFSET))(this);
	}

	::System::Void set_Interval(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_SET_INTERVAL_OFFSET))(this, a1);
	}

	::System::UInt32 get_Id()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_GET_ID_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::Class_1_B547B56320B70AD4* Method_1_80A751D930F59D01(::System::UInt32 a1)
	{
		return ((::Class_1_B547B56320B70AD4*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_80A751D930F59D01_OFFSET))(a1);
	}

	static ::Class_1_B547B56320B70AD4* Method_1_4AF35CCF7882E598(::System::UInt32 a1)
	{
		return ((::Class_1_B547B56320B70AD4*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_4AF35CCF7882E598_OFFSET))(a1);
	}

	::System::Void Method_1_988F66065AF48634(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_988F66065AF48634_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* Method_1_E7BCAA74CB20DCB6()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_E7BCAA74CB20DCB6_OFFSET))(this);
	}

	::System::Void Method_1_4792FCD3AEEF1D34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_4792FCD3AEEF1D34_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B547B56320B70AD4_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}
};
