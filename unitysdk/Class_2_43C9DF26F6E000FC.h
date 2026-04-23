#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_4;
class Class_1_C4D20E7B3D5ABE35;
class Class_1_D902165F458B1BE5;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_43C9DF26F6E000FC_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x9669CF0)
#define CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x9669E30)
#define CLASS_2_43C9DF26F6E000FC_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x966A140)
#define CLASS_2_43C9DF26F6E000FC_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x9669D40)
#define CLASS_2_43C9DF26F6E000FC_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x966A460)
#define CLASS_2_43C9DF26F6E000FC_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x9669FC0)
#define CLASS_2_43C9DF26F6E000FC__CTOR_OFFSET UNITYSDK_OFFSET(0x966A510)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x966A5C0)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x966A6A0)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x966A780)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x966A630)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x966A7F0)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x966A710)

inline static constexpr unsigned int Class_2_43C9DF26F6E000FC_TypeDefinitionIndex = 60009;

class Class_2_43C9DF26F6E000FC : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::Class_1_C4D20E7B3D5ABE35* Field_2_2; // 0x10
	::Class_1_D902165F458B1BE5* Field_2_1; // 0x18
	::System::UInt32 Field_2_3; // 0x20
	::Enum_3_75A5C8C4100A8E33_1 Field_2_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEDONE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
	}
};
