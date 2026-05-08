#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x99EB60)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99EB70)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x99E9D0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x99EA40)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x7A4200)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x99EAB0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99EAC0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_0147A22E503BD4DB_1_OFFSET UNITYSDK_OFFSET(0x1BA401A0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_0147A22E503BD4DB_OFFSET UNITYSDK_OFFSET(0x1BA3FE40)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_5C5453F8BFC207B6_OFFSET UNITYSDK_OFFSET(0x99EC50)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x99ECD0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_7D707A563DCABBD4_OFFSET UNITYSDK_OFFSET(0x1BA40350)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x99EC60)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_C3AC317E66DB45FB_OFFSET UNITYSDK_OFFSET(0x1BA403F0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_DB89B426EC2F338A_OFFSET UNITYSDK_OFFSET(0x1BA402C0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_DB8AD7EC9C4D43ED_OFFSET UNITYSDK_OFFSET(0x1BA3FDB0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x99EB50)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA3F100)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A43A0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8500)

namespace MoleMole::Arcade::CoreBase
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 26333;

	struct alignas(8) ComponentMask
	{
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_2_DB8AD7EC9C4D43ED(::MoleMole::Arcade::CoreBase::ComponentMask a1, ::MoleMole::Arcade::CoreBase::ComponentMask a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_DB8AD7EC9C4D43ED_OFFSET))(a1, a2);
		}

		static ::MoleMole::Arcade::CoreBase::ComponentMask Method_2_0147A22E503BD4DB(::MoleMole::Arcade::CoreBase::ComponentMask a1, ::MoleMole::Arcade::CoreBase::ComponentMask a2)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_0147A22E503BD4DB_OFFSET))(a1, a2);
		}

		::System::UInt32 Method_2_5C5453F8BFC207B6()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_5C5453F8BFC207B6_OFFSET))(this);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		static ::MoleMole::Arcade::CoreBase::ComponentMask Method_2_0147A22E503BD4DB_1(::MoleMole::Arcade::CoreBase::ComponentMask a1, ::MoleMole::Arcade::CoreBase::ComponentMask a2)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_0147A22E503BD4DB_1_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}

		static ::MoleMole::Arcade::CoreBase::ComponentMask Method_2_DB89B426EC2F338A(::MoleMole::Arcade::CoreBase::ComponentMask a1)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_DB89B426EC2F338A_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_7D707A563DCABBD4(::MoleMole::Arcade::CoreBase::ComponentMask a1, ::MoleMole::Arcade::CoreBase::ComponentMask a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_7D707A563DCABBD4_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Method_2_C3AC317E66DB45FB(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_METHOD_2_C3AC317E66DB45FB_OFFSET))(a1);
		}
	};
}
