#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCardinalDirection.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_F88B28E90BD371ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D057400)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_1D90B900776DD74D_OFFSET UNITYSDK_OFFSET(0x1D057460)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_66D011115E87BDB4_OFFSET UNITYSDK_OFFSET(0x1D057BD0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_6E38F0ABCF931476_OFFSET UNITYSDK_OFFSET(0x1D05AC50)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x1D05B250)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_B56F54B59BD70998_OFFSET UNITYSDK_OFFSET(0x1D057AC0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_BBF52D8BC72B1133_OFFSET UNITYSDK_OFFSET(0x1D057B40)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_C6B152324C340570_OFFSET UNITYSDK_OFFSET(0x1D059D00)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1D05B2C0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_E60A8279A69ED115_OFFSET UNITYSDK_OFFSET(0x1D058C10)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_1_OFFSET UNITYSDK_OFFSET(0x1D05B420)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_OFFSET UNITYSDK_OFFSET(0x1D05B320)
#define CLASS_1_F88B28E90BD371ED_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D057330)
#define CLASS_1_F88B28E90BD371ED_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D0573C0)
#define CLASS_1_F88B28E90BD371ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05B530)

inline static constexpr unsigned int Class_1_F88B28E90BD371ED_TypeDefinitionIndex = 41727;

class Class_1_F88B28E90BD371ED : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_EAC1BB0F093534A5>* AMOAILILJED; // 0x10
	::UnityEngine::Vector3 HBCLOFAJDMH; // 0x18
	::Struct_2_EAC1BB0F093534A5 EHEPFGAHPBK; // 0x24
	::Struct_2_EAC1BB0F093534A5 GIBGFBIAPBI; // 0x8C
	::RPG::GameCore::FiveDimCardinalDirection CDFCOICCPJN; // 0xF4
	::System::Boolean PELJACANAFH; // 0xF8
	::System::Boolean EEBCOLBIPBC; // 0xF9
	::System::Single LIBNCDAIOPK; // 0xFC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_CLEAR_OFFSET))(this);
	}

	::System::ValueTuple_4<::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single> Method_1_1D90B900776DD74D(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::ValueTuple_4<::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_1D90B900776DD74D_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_4<::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single> Method_1_E60A8279A69ED115(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::ValueTuple_4<::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_E60A8279A69ED115_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Struct_2_EAC1BB0F093534A5 Method_1_66D011115E87BDB4(::Struct_2_EAC1BB0F093534A5 a1, ::Struct_2_EAC1BB0F093534A5 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Single& a5)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::Struct_2_EAC1BB0F093534A5, ::Struct_2_EAC1BB0F093534A5, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_66D011115E87BDB4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_6E38F0ABCF931476(::Struct_2_EAC1BB0F093534A5 a1, ::Struct_2_EAC1BB0F093534A5 a2)
	{
		return ((::System::Single(*)(::Struct_2_EAC1BB0F093534A5, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_6E38F0ABCF931476_OFFSET))(a1, a2);
	}

	static ::Struct_2_EAC1BB0F093534A5 Method_1_C6B152324C340570(::Struct_2_EAC1BB0F093534A5 a1, ::Struct_2_EAC1BB0F093534A5 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::Struct_2_EAC1BB0F093534A5, ::Struct_2_EAC1BB0F093534A5, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_C6B152324C340570_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B56F54B59BD70998(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_B56F54B59BD70998_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BBF52D8BC72B1133(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_BBF52D8BC72B1133_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 Method_1_EFF891E44DC344F4()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 Method_1_EFF891E44DC344F4_1()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_1_OFFSET))(this);
	}
};
