#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONOEFFECTPLUGINMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x84C250)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84C260)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x84BFF0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x84C060)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x84BFE0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x84C0D0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x84C0E0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_544AC7FD9C04B740_OFFSET UNITYSDK_OFFSET(0x1686F5B0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_5C5453F8BFC207B6_OFFSET UNITYSDK_OFFSET(0x84C3B0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x84C3C0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_8033BA857BC54B59_OFFSET UNITYSDK_OFFSET(0x1686F370)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x84C340)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_C3AC317E66DB45FB_OFFSET UNITYSDK_OFFSET(0x1686F510)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_E191ECA9BAAF654D_1_OFFSET UNITYSDK_OFFSET(0x1686F650)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_E191ECA9BAAF654D_OFFSET UNITYSDK_OFFSET(0x1686F460)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_FB17CB222BBFA5EC_OFFSET UNITYSDK_OFFSET(0x1686F9D0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x84C170)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1686E6E0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x84C180)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginMask_TypeDefinitionIndex = 77208;

	struct alignas(8) MonoEffectPluginMask
	{
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_2_8033BA857BC54B59(::MoleMole::MonoEffectPluginMask a1, ::MoleMole::MonoEffectPluginMask a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_8033BA857BC54B59_OFFSET))(a1, a2);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		static ::MoleMole::MonoEffectPluginMask Method_2_E191ECA9BAAF654D(::MoleMole::MonoEffectPluginMask a1, ::MoleMole::MonoEffectPluginMask a2)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_E191ECA9BAAF654D_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Method_2_C3AC317E66DB45FB(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_C3AC317E66DB45FB_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_544AC7FD9C04B740(::MoleMole::MonoEffectPluginMask a1, ::MoleMole::MonoEffectPluginMask a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_544AC7FD9C04B740_OFFSET))(a1, a2);
		}

		static ::MoleMole::MonoEffectPluginMask Method_2_E191ECA9BAAF654D_1(::MoleMole::MonoEffectPluginMask a1, ::MoleMole::MonoEffectPluginMask a2)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_E191ECA9BAAF654D_1_OFFSET))(a1, a2);
		}

		::System::UInt32 Method_2_5C5453F8BFC207B6()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_5C5453F8BFC207B6_OFFSET))(this);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}

		static ::MoleMole::MonoEffectPluginMask Method_2_FB17CB222BBFA5EC(::MoleMole::MonoEffectPluginMask a1)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_METHOD_2_FB17CB222BBFA5EC_OFFSET))(a1);
		}
	};
}
