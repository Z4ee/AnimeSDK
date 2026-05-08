#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1DAC1F9F4B999C38_Struct_2_2673E6B37CEF07BF_1.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/Struct_2_46ED841045361C28.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_0B4B6165B27FE899_OFFSET UNITYSDK_OFFSET(0x11B32980)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_2D3B706807532931_OFFSET UNITYSDK_OFFSET(0x11B32810)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x11B32FF0)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_5749CD14345907B1_OFFSET UNITYSDK_OFFSET(0x11B32690)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x11B32F90)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_72F506570A14E43C_OFFSET UNITYSDK_OFFSET(0x11B32550)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_8A5370F4070DF55A_OFFSET UNITYSDK_OFFSET(0x11B326E0)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x11B32460)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x11B32320)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x11B329F0)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11B32640)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B32110)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x11B323D0)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11B32800)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11B32310)
#define CLASS_1_1DAC1F9F4B999C38_METHOD_1_F2540FF637BCC4A6_OFFSET UNITYSDK_OFFSET(0x11B32180)
#define CLASS_1_1DAC1F9F4B999C38__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B32090)
#define CLASS_1_1DAC1F9F4B999C38__CTOR_OFFSET UNITYSDK_OFFSET(0x11B31E80)

inline static constexpr unsigned int Class_1_1DAC1F9F4B999C38_TypeDefinitionIndex = 74197;

class Class_1_1DAC1F9F4B999C38 : public ::System::Object
{
public:
	static ::MoleMole::Cameras::CameraMiscSetting** StaticGet_Field_1_0()
	{
		return (::MoleMole::Cameras::CameraMiscSetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DAC1F9F4B999C38_TypeDefinitionIndex)->GetStaticField(0x46DC0);
	}
	::MoleMole::Cameras::CameraMiscSetting* Field_1_5; // 0x10
	::Foundation::PriorityQueue_2<::MoleMole::Cameras::CameraMiscSetting*, ::System::UInt64>* Field_1_2; // 0x18
	::MoleMole::Cameras::CameraMiscSetting* Field_1_1; // 0x20
	::System::Nullable_1<::Struct_2_455336A079B58DD3> Field_1_7; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_1_3; // 0x50
	::System::Nullable_1<::Struct_2_46ED841045361C28> Field_1_6; // 0x58
	::System::UInt32 Field_1_4; // 0x88
	::System::Double Field_1_8; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F2540FF637BCC4A6(::System::Int32 a1, ::MoleMole::Cameras::CameraMiscSetting* a2, ::Class_1_1DAC1F9F4B999C38_Struct_2_2673E6B37CEF07BF_1& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Cameras::CameraMiscSetting*, ::Class_1_1DAC1F9F4B999C38_Struct_2_2673E6B37CEF07BF_1&))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_F2540FF637BCC4A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_1_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Boolean Method_1_72F506570A14E43C(::Class_1_1DAC1F9F4B999C38_Struct_2_2673E6B37CEF07BF_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1DAC1F9F4B999C38_Struct_2_2673E6B37CEF07BF_1))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_72F506570A14E43C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraMiscSetting* Method_1_5749CD14345907B1()
	{
		return ((::MoleMole::Cameras::CameraMiscSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_5749CD14345907B1_OFFSET))(this);
	}

	::System::Void Method_1_8A5370F4070DF55A(::Struct_2_455336A079B58DD3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_455336A079B58DD3&))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_8A5370F4070DF55A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraMiscSetting* Method_1_2D3B706807532931()
	{
		return ((::MoleMole::Cameras::CameraMiscSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_2D3B706807532931_OFFSET))(this);
	}

	::System::Boolean Method_1_0B4B6165B27FE899(::MoleMole::Cameras::CameraMiscSetting* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_0B4B6165B27FE899_OFFSET))(this, a1);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_31B71B6D307F7F0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38_METHOD_1_31B71B6D307F7F0C_OFFSET))(this);
	}
};
