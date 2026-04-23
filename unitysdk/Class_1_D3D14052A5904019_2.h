#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62355CAF578E9139.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_980;
class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3D14052A5904019_2_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x95D3920)
#define CLASS_1_D3D14052A5904019_2_METHOD_1_1E6E9C8481C81215_OFFSET UNITYSDK_OFFSET(0x95D3450)
#define CLASS_1_D3D14052A5904019_2_METHOD_1_35C4D665ADA99E8D_OFFSET UNITYSDK_OFFSET(0x95D30F0)
#define CLASS_1_D3D14052A5904019_2_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x95D3350)
#define CLASS_1_D3D14052A5904019_2_METHOD_1_7F3D99FA7CB53A6B_OFFSET UNITYSDK_OFFSET(0x95D31B0)
#define CLASS_1_D3D14052A5904019_2_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x95D33E0)
#define CLASS_1_D3D14052A5904019_2_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x95D3930)
#define CLASS_1_D3D14052A5904019_2__CTOR_OFFSET UNITYSDK_OFFSET(0x95D31A0)

inline static constexpr unsigned int Class_1_D3D14052A5904019_2_TypeDefinitionIndex = 66487;

class Class_1_D3D14052A5904019_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* _ItemDatas_k__BackingField; // 0x10
	::Class_1_AB817CB39E494C61* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2__CTOR_OFFSET))(this);
	}

	static ::Class_1_D3D14052A5904019_2* Method_1_35C4D665ADA99E8D(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::Class_1_D3D14052A5904019_2*(*)(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_METHOD_1_35C4D665ADA99E8D_OFFSET))(a1);
	}

	::System::Void Method_1_7F3D99FA7CB53A6B(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_METHOD_1_7F3D99FA7CB53A6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_980*>* Method_1_1E6E9C8481C81215(::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_980*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_METHOD_1_1E6E9C8481C81215_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* get_ItemDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_GET_ITEMDATAS_OFFSET))(this);
	}

	::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2_SET_ITEMDATAS_OFFSET))(this, value);
	}
};
