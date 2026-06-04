#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_5;
class Class_1_C4D20E7B3D5ABE35;
class Class_1_F8E102AD914E06E3;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_43C9DF26F6E000FC_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD7E8EF0)
#define CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xD7E9030)
#define CLASS_2_43C9DF26F6E000FC_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD7E9470)
#define CLASS_2_43C9DF26F6E000FC_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD7E8F40)
#define CLASS_2_43C9DF26F6E000FC_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xD7E97B0)
#define CLASS_2_43C9DF26F6E000FC_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xD7E9210)
#define CLASS_2_43C9DF26F6E000FC__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E9800)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD7E98B0)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xD7E9970)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD7E9A30)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD7E9910)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xD7E9A90)
#define CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xD7E99D0)

inline static constexpr unsigned int Class_2_43C9DF26F6E000FC_TypeDefinitionIndex = 60944;

class Class_2_43C9DF26F6E000FC : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::Class_1_F8E102AD914E06E3* Field_2_0; // 0x10
	::Class_1_C4D20E7B3D5ABE35* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::Enum_3_75A5C8C4100A8E33_1 Field_2_3; // 0x24

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

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET))(this, a1);
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

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
	}
};
