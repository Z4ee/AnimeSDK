#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_77D4095D49568755.h"
#include "unitysdk/System/ValueType.h"

class Class_1_125B637E4CB5468C_1;
namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x7911E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x791250)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x791170)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x790FF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETRENDERSTATUES_OFFSET UNITYSDK_OFFSET(0x791110)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISSET_OFFSET UNITYSDK_OFFSET(0x7910A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x791100)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12622100)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x126221B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12622280)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4F82F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x790F10)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x791260)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7912D0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataHandle_TypeDefinitionIndex = 51540;

	struct alignas(8) RenderDataHandle
	{
		static ::MoleMole::HollowChessboard::RenderDataHandle* StaticGet_Default()
		{
			return (::MoleMole::HollowChessboard::RenderDataHandle*)Il2CppClass::FromTypeDefinitionIndex(RenderDataHandle_TypeDefinitionIndex)->GetStaticField(0x2ED50);
		}
		::System::Int32 _serialNumber; // 0x10
		::System::Int32 _index; // 0x14
		::Class_1_125B637E4CB5468C_1* _statusHolder; // 0x18

		::System::Void _ctor(::System::Int32 index, ::Class_1_125B637E4CB5468C_1* statusHolder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_125B637E4CB5468C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_OFFSET))(this, index, statusHolder);
		}

		::System::Void _ctor_1(::System::Int32 serialNumber, ::System::Int32 index, ::Class_1_125B637E4CB5468C_1* statusHolder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_125B637E4CB5468C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_1_OFFSET))(this, serialNumber, index, statusHolder);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_SerialNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean IsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISSET_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISVALID_OFFSET))(this);
		}

		::Enum_3_77D4095D49568755 GetRenderStatues()
		{
			return ((::Enum_3_77D4095D49568755(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETRENDERSTATUES_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::HollowChessboard::RenderDataHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::MoleMole::HollowChessboard::RenderDataHandle other)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::MoleMole::HollowChessboard::RenderDataHandle lhs, ::MoleMole::HollowChessboard::RenderDataHandle rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MoleMole::HollowChessboard::RenderDataHandle lhs, ::MoleMole::HollowChessboard::RenderDataHandle rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
