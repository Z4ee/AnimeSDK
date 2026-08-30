#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B99B60)
#define RPG_MRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B99AE0)
#define RPG_MRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x3B99CD0)
#define RPG_MRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3B996C0)
#define RPG_MRECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xD510)
#define RPG_MRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define RPG_MRECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3B99730)
#define RPG_MRECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define RPG_MRECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define RPG_MRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3B5C2B0)
#define RPG_MRECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x6020)
#define RPG_MRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define RPG_MRECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define RPG_MRECT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x3B997C0)
#define RPG_MRECT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define RPG_MRECT_GET_X_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define RPG_MRECT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x3B997E0)
#define RPG_MRECT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define RPG_MRECT_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define RPG_MRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D78AC90)
#define RPG_MRECT_METHOD_2_049CD1907283FB4E_OFFSET UNITYSDK_OFFSET(0x1D78B040)
#define RPG_MRECT_METHOD_2_1B9EA960A9DB41B1_OFFSET UNITYSDK_OFFSET(0x1D78ACA0)
#define RPG_MRECT_METHOD_2_4022C2F79758BB77_OFFSET UNITYSDK_OFFSET(0x3B99840)
#define RPG_MRECT_METHOD_2_5B0203A4BE86EC04_OFFSET UNITYSDK_OFFSET(0x3B99800)
#define RPG_MRECT_METHOD_2_722BF5E0036337D0_1_OFFSET UNITYSDK_OFFSET(0x1D78B310)
#define RPG_MRECT_METHOD_2_722BF5E0036337D0_OFFSET UNITYSDK_OFFSET(0x1D78B2D0)
#define RPG_MRECT_METHOD_2_8264E922558C7063_OFFSET UNITYSDK_OFFSET(0x3B99880)
#define RPG_MRECT_METHOD_2_90D402E1D634495E_OFFSET UNITYSDK_OFFSET(0x1D78B230)
#define RPG_MRECT_METHOD_2_9D50E61CF9674A13_OFFSET UNITYSDK_OFFSET(0x1D78B1A0)
#define RPG_MRECT_METHOD_2_A574C24F2647CF85_OFFSET UNITYSDK_OFFSET(0x3B99940)
#define RPG_MRECT_METHOD_2_C8AF816F85BE923A_OFFSET UNITYSDK_OFFSET(0x3B99CC0)
#define RPG_MRECT_METHOD_2_CFB00F7EDF0A1A72_OFFSET UNITYSDK_OFFSET(0x3B99990)
#define RPG_MRECT_METHOD_2_D375F1894550A459_OFFSET UNITYSDK_OFFSET(0x25B40)
#define RPG_MRECT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x3B996F0)
#define RPG_MRECT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xD520)
#define RPG_MRECT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3B99760)
#define RPG_MRECT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3B99710)
#define RPG_MRECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC610)
#define RPG_MRECT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x9500)
#define RPG_MRECT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD500)
#define RPG_MRECT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x3B997D0)
#define RPG_MRECT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x3B99780)
#define RPG_MRECT_SET_X_OFFSET UNITYSDK_OFFSET(0xD4C0)
#define RPG_MRECT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x3B997F0)
#define RPG_MRECT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x3B997A0)
#define RPG_MRECT_SET_Y_OFFSET UNITYSDK_OFFSET(0xD4E0)
#define RPG_MRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B99CB0)
#define RPG_MRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B996A0)
#define RPG_MRECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2E50B00)
#define RPG_MRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x25B40)

namespace RPG
{
	inline static constexpr unsigned int MRect_TypeDefinitionIndex = 6381;

	struct alignas(4) MRect
	{
		::System::Single m_XMin; // 0x10
		::System::Single m_YMin; // 0x14
		::System::Single m_Width; // 0x18
		::System::Single m_Height; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT__CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_2(::RPG::MRect a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT__CTOR_2_OFFSET))(this, a1);
		}

		static ::RPG::MRect get_zero()
		{
			return ((::RPG::MRect(*)())((::PBYTE)hIl2Cpp + RPG_MRECT_GET_ZERO_OFFSET))();
		}

		static ::RPG::MRect Method_2_1B9EA960A9DB41B1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::MRect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_1B9EA960A9DB41B1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_2_D375F1894550A459(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_D375F1894550A459_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_Y_OFFSET))(this, a1);
		}

		/*
		::RPG::MVector2 get_position()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_POSITION_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::MVector2 get_center()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_CENTER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_center(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_CENTER_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::MVector2 get_min()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_MIN_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_min(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_MIN_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::MVector2 get_max()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_MAX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_max(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_MAX_OFFSET))(this, a1);
		}
		*/

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_HEIGHT_OFFSET))(this, a1);
		}

		/*
		::RPG::MVector2 get_size()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_SIZE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_XMIN_OFFSET))(this);
		}

		::System::Void set_xMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_XMIN_OFFSET))(this, a1);
		}

		::System::Single get_yMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_YMIN_OFFSET))(this);
		}

		::System::Void set_yMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_YMIN_OFFSET))(this, a1);
		}

		::System::Single get_xMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_XMAX_OFFSET))(this);
		}

		::System::Void set_xMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_XMAX_OFFSET))(this, a1);
		}

		::System::Single get_yMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_YMAX_OFFSET))(this);
		}

		::System::Void set_yMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_YMAX_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Method_2_5B0203A4BE86EC04(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_5B0203A4BE86EC04_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Method_2_4022C2F79758BB77(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_4022C2F79758BB77_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Method_2_8264E922558C7063(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_8264E922558C7063_OFFSET))(this, a1, a2);
		}
		*/

		static ::RPG::MRect Method_2_049CD1907283FB4E(::RPG::MRect a1)
		{
			return ((::RPG::MRect(*)(::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_049CD1907283FB4E_OFFSET))(a1);
		}

		::System::Boolean Method_2_A574C24F2647CF85(::RPG::MRect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_A574C24F2647CF85_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_CFB00F7EDF0A1A72(::RPG::MRect a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MRect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_CFB00F7EDF0A1A72_OFFSET))(this, a1, a2);
		}

		/*
		static ::RPG::MVector2 Method_2_9D50E61CF9674A13(::RPG::MRect a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MRect, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_9D50E61CF9674A13_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MVector2 Method_2_90D402E1D634495E(::RPG::MRect a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MRect, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_90D402E1D634495E_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_722BF5E0036337D0(::RPG::MRect a1, ::RPG::MRect a2)
		{
			return ((::System::Boolean(*)(::RPG::MRect, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_722BF5E0036337D0_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_722BF5E0036337D0_1(::RPG::MRect a1, ::RPG::MRect a2)
		{
			return ((::System::Boolean(*)(::RPG::MRect, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_722BF5E0036337D0_1_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MRECT_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_2_C8AF816F85BE923A(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MRECT_METHOD_2_C8AF816F85BE923A_OFFSET))(this, a1);
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_RIGHT_OFFSET))(this);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_TOP_OFFSET))(this);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_BOTTOM_OFFSET))(this);
		}
	};
}
