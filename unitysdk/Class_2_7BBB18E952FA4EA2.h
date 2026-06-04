#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_5;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_7BBB18E952FA4EA2_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1415AA00)
#define CLASS_2_7BBB18E952FA4EA2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1415AF90)
#define CLASS_2_7BBB18E952FA4EA2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1415AFF0)
#define CLASS_2_7BBB18E952FA4EA2_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1415AD90)
#define CLASS_2_7BBB18E952FA4EA2_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1415AE20)
#define CLASS_2_7BBB18E952FA4EA2_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1415AA50)
#define CLASS_2_7BBB18E952FA4EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1415B040)
#define CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1415B050)
#define CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1415B110)
#define CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1415B170)
#define CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1415B0B0)

inline static constexpr unsigned int Class_2_7BBB18E952FA4EA2_TypeDefinitionIndex = 60943;

class Class_2_7BBB18E952FA4EA2 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x10
	::RPG::Client::GridFightRole* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_7BBB18E952FA4EA2___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}
};
