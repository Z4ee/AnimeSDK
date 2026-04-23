#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RendererMoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A24888DF04C995E_1;
class Class_1_6DE8726ADEF173A7_6;
class Class_1_E5DFDD7C057D0C86;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_B0AE402A30E726B1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E8A6D0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_01C5F8CE46F98185_OFFSET UNITYSDK_OFFSET(0x17E89D00)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17E8A670)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_2F1AB5AC1D431D0D_OFFSET UNITYSDK_OFFSET(0x17E8A180)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_3F6435A17B157AFD_OFFSET UNITYSDK_OFFSET(0x17E89BD0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x17E8A3E0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x17E8A110)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x17E8A370)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17E8A600)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_D605F1EFFC4B0D43_OFFSET UNITYSDK_OFFSET(0x17E89B00)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x17E8A530)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_F11560A2B1C05F19_OFFSET UNITYSDK_OFFSET(0x17E89F60)
#define CLASS_1_B0AE402A30E726B1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E8AB60)
#define CLASS_1_B0AE402A30E726B1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17E8ABD0)
#define CLASS_1_B0AE402A30E726B1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8AC10)

inline static constexpr unsigned int Class_1_B0AE402A30E726B1_TypeDefinitionIndex = 39113;

class Class_1_B0AE402A30E726B1 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_0A24888DF04C995E_1*>* Field_1_7; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_6DE8726ADEF173A7_6*>* Field_1_3; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::RPG::PoolDictionary_2<::System::String*, ::Class_1_E5DFDD7C057D0C86*>*>* Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x28
	::UnityEngine::Quaternion Field_1_1; // 0x34
	::UnityEngine::Quaternion Field_1_2; // 0x44
	::System::Boolean Field_1_6; // 0x54
	::System::Boolean Field_1_5; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D605F1EFFC4B0D43(::Class_1_6DE8726ADEF173A7_6* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_D605F1EFFC4B0D43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01C5F8CE46F98185(::Class_1_E5DFDD7C057D0C86* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5DFDD7C057D0C86*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_01C5F8CE46F98185_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F11560A2B1C05F19(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_F11560A2B1C05F19_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F6435A17B157AFD(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_3F6435A17B157AFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F1AB5AC1D431D0D(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_2F1AB5AC1D431D0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_952453844D88CADD(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_ONRECYCLE_OFFSET))(this);
	}
};
