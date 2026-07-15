#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCardinalDirection.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_F88B28E90BD371ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x175832F0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_1D90B900776DD74D_OFFSET UNITYSDK_OFFSET(0x17583350)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_66D011115E87BDB4_OFFSET UNITYSDK_OFFSET(0x17583AC0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_6E38F0ABCF931476_OFFSET UNITYSDK_OFFSET(0x17586B40)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x17587140)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_B56F54B59BD70998_OFFSET UNITYSDK_OFFSET(0x175839B0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_BBF52D8BC72B1133_OFFSET UNITYSDK_OFFSET(0x17583A30)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_C6B152324C340570_OFFSET UNITYSDK_OFFSET(0x17585BF0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x175871B0)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_E60A8279A69ED115_OFFSET UNITYSDK_OFFSET(0x17584B00)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_1_OFFSET UNITYSDK_OFFSET(0x17587310)
#define CLASS_1_F88B28E90BD371ED_METHOD_1_EFF891E44DC344F4_OFFSET UNITYSDK_OFFSET(0x17587210)
#define CLASS_1_F88B28E90BD371ED_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17583220)
#define CLASS_1_F88B28E90BD371ED_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x175832B0)
#define CLASS_1_F88B28E90BD371ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17587420)

inline static constexpr unsigned int Class_1_F88B28E90BD371ED_TypeDefinitionIndex = 40773;

class Class_1_F88B28E90BD371ED : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_EAC1BB0F093534A5>* Field_1_0; // 0x10
	::Struct_2_EAC1BB0F093534A5 Field_1_1; // 0x18
	::RPG::GameCore::FiveDimCardinalDirection Field_1_2; // 0x80
	::System::Boolean Field_1_3; // 0x84
	::System::Boolean Field_1_4; // 0x85
	::System::Single Field_1_5; // 0x88
	::UnityEngine::Vector3 Field_1_6; // 0x8C
	::Struct_2_EAC1BB0F093534A5 Field_1_7; // 0x98

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
