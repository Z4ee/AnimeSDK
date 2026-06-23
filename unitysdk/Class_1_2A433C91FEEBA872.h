#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A433C91FEEBA872_Struct_2_C4BACA0F63C490F1_1.h"
#include "unitysdk/Enum_3_912810AC2DDEC684.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_2.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_71EFEDDF557FEC4B;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2A433C91FEEBA872_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E41BD20)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_09CB38B31EEE61F0_OFFSET UNITYSDK_OFFSET(0x1E41C250)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_17929EF085C00C76_OFFSET UNITYSDK_OFFSET(0x1E41C0E0)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E41BFD0)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E41C6B0)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x1E41C070)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E41D030)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1E41BDE0)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1E41C0C0)
#define CLASS_1_2A433C91FEEBA872_METHOD_1_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x1E41C6C0)
#define CLASS_1_2A433C91FEEBA872__CTOR_OFFSET UNITYSDK_OFFSET(0x1E41BB20)

inline static constexpr unsigned int Class_1_2A433C91FEEBA872_TypeDefinitionIndex = 89335;

class Class_1_2A433C91FEEBA872 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2A433C91FEEBA872_Struct_2_C4BACA0F63C490F1_1>* Field_1_7; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_1_71EFEDDF557FEC4B*>* Field_1_8; // 0x20
	::UnityEngine::Camera* Field_1_1; // 0x28
	::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_1, ::Struct_2_3BFB14B0511B64BC_2> Field_1_5; // 0x30
	::UnityEngine::Vector3 Field_1_3; // 0x5C
	::Enum_3_912810AC2DDEC684 Field_1_0; // 0x68
	::System::Boolean Field_1_6; // 0x6C
	::UnityEngine::Quaternion Field_1_4; // 0x70

	::System::Void _ctor(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_17929EF085C00C76(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_17929EF085C00C76_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CB38B31EEE61F0(::System::String* a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Int32 a3, ::Enum_3_912810AC2DDEC684 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Int32, ::Enum_3_912810AC2DDEC684))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_09CB38B31EEE61F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_912810AC2DDEC684 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_912810AC2DDEC684))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0E5333B48B6C5FF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_F0E5333B48B6C5FF_OFFSET))(this, a1);
	}

	::Enum_3_912810AC2DDEC684 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_912810AC2DDEC684(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A433C91FEEBA872_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}
};
