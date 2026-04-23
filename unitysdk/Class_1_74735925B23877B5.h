#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist_LayerBackgroundMapEntity.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist_LayerBackgroundStageItem.h"
#include "unitysdk/System/Object.h"

class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoPerformanceLayerBackground; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_74735925B23877B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B0AAD0)
#define CLASS_1_74735925B23877B5_METHOD_1_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x12B0B0D0)
#define CLASS_1_74735925B23877B5_METHOD_1_0BC5386E06CF8A2C_OFFSET UNITYSDK_OFFSET(0x12B0A9B0)
#define CLASS_1_74735925B23877B5_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12B0B940)
#define CLASS_1_74735925B23877B5_METHOD_1_130A15C42437888E_OFFSET UNITYSDK_OFFSET(0x12B0B1F0)
#define CLASS_1_74735925B23877B5_METHOD_1_20562A9DB4906E09_OFFSET UNITYSDK_OFFSET(0x12B0BE80)
#define CLASS_1_74735925B23877B5_METHOD_1_2D51D385F566D3BF_OFFSET UNITYSDK_OFFSET(0x12B0C3E0)
#define CLASS_1_74735925B23877B5_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12B0AD10)
#define CLASS_1_74735925B23877B5_METHOD_1_4A791916EC6D5C0A_OFFSET UNITYSDK_OFFSET(0x12B0BFD0)
#define CLASS_1_74735925B23877B5_METHOD_1_4F65747BD73CCFB3_OFFSET UNITYSDK_OFFSET(0x12B0BD50)
#define CLASS_1_74735925B23877B5_METHOD_1_6AE3266265E98B1F_OFFSET UNITYSDK_OFFSET(0x12B0C100)
#define CLASS_1_74735925B23877B5_METHOD_1_6C19D4BE6FF4BC99_OFFSET UNITYSDK_OFFSET(0x12B0AC40)
#define CLASS_1_74735925B23877B5_METHOD_1_86C362840A264FF1_OFFSET UNITYSDK_OFFSET(0x12B0C4C0)
#define CLASS_1_74735925B23877B5_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x12B0AA00)
#define CLASS_1_74735925B23877B5_METHOD_1_9186B8EB46BDAB54_OFFSET UNITYSDK_OFFSET(0x12B0B800)
#define CLASS_1_74735925B23877B5_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x12B0AB20)
#define CLASS_1_74735925B23877B5_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x12B0B2A0)
#define CLASS_1_74735925B23877B5_METHOD_1_AF6FDB803CFD02C3_OFFSET UNITYSDK_OFFSET(0x12B0B770)
#define CLASS_1_74735925B23877B5_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12B0B6D0)
#define CLASS_1_74735925B23877B5_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET UNITYSDK_OFFSET(0x12B0BB60)
#define CLASS_1_74735925B23877B5_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x12B0BC90)
#define CLASS_1_74735925B23877B5_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x12B0B3B0)
#define CLASS_1_74735925B23877B5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12B0BA50)
#define CLASS_1_74735925B23877B5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B0B1B0)
#define CLASS_1_74735925B23877B5_METHOD_1_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x12B0AF10)
#define CLASS_1_74735925B23877B5_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12B0AE50)
#define CLASS_1_74735925B23877B5_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x12B0BA90)
#define CLASS_1_74735925B23877B5_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x12B0B150)
#define CLASS_1_74735925B23877B5_METHOD_1_F074B129A260BF8A_OFFSET UNITYSDK_OFFSET(0x12B0C250)
#define CLASS_1_74735925B23877B5__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0A7B0)

inline static constexpr unsigned int Class_1_74735925B23877B5_TypeDefinitionIndex = 55975;

class Class_1_74735925B23877B5 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_7; // 0x28
	::UnityEngine::Transform* Field_1_6; // 0x30
	::RPG::Client::MonoPerformanceLayerBackground* Field_1_5; // 0x38
	::Class_1_4B703F2764047929* Field_1_0; // 0x40

	::System::Void _ctor(::Class_1_4B703F2764047929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BC5386E06CF8A2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_0BC5386E06CF8A2C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_0AD139A96804E15E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_0AD139A96804E15E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_130A15C42437888E(::RPGTools::Timeline::LayerBackgroundWhitelist a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LayerBackgroundWhitelist, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_130A15C42437888E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9186B8EB46BDAB54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_9186B8EB46BDAB54_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_6C19D4BE6FF4BC99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_6C19D4BE6FF4BC99_OFFSET))(this);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF6FDB803CFD02C3(::RPGTools::Timeline::LayerBackgroundWhitelist a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LayerBackgroundWhitelist))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_AF6FDB803CFD02C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F65747BD73CCFB3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_4F65747BD73CCFB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_20562A9DB4906E09(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_20562A9DB4906E09_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A791916EC6D5C0A(::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundStageItem>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundStageItem>*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_4A791916EC6D5C0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AE3266265E98B1F(::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundMapEntity>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::LayerBackgroundWhitelist_LayerBackgroundMapEntity>*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_6AE3266265E98B1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F074B129A260BF8A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_F074B129A260BF8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8DDB8B6AA8ACDA5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_86C362840A264FF1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_86C362840A264FF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D51D385F566D3BF(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_2D51D385F566D3BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74735925B23877B5_METHOD_1_CE7DD1A4F75322E2_OFFSET))(this);
	}
};
