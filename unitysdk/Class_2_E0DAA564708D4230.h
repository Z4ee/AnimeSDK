#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VFSDataLoader_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D70A30D666F20D90;
class Class_2_D640AF70A652FF6A;
namespace RPG::GameCore { class AudioGroundVoxelData; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E0DAA564708D4230_METHOD_2_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x188E3BF0)
#define CLASS_2_E0DAA564708D4230_METHOD_2_15A11EB4EAAB3892_OFFSET UNITYSDK_OFFSET(0x188E3CD0)
#define CLASS_2_E0DAA564708D4230_METHOD_2_2226425FEA7C17BC_OFFSET UNITYSDK_OFFSET(0x188E3B10)
#define CLASS_2_E0DAA564708D4230_METHOD_2_5D16249951989810_OFFSET UNITYSDK_OFFSET(0x188E3A20)
#define CLASS_2_E0DAA564708D4230_METHOD_2_F084F42E6711AD43_OFFSET UNITYSDK_OFFSET(0x188E3740)
#define CLASS_2_E0DAA564708D4230_PRELOAD_OFFSET UNITYSDK_OFFSET(0x188E3D60)
#define CLASS_2_E0DAA564708D4230__CCTOR_OFFSET UNITYSDK_OFFSET(0x188E4600)
#define CLASS_2_E0DAA564708D4230__CTOR_OFFSET UNITYSDK_OFFSET(0x188E36A0)
#define CLASS_2_E0DAA564708D4230__PRELOADVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x188E4300)
#define CLASS_2_E0DAA564708D4230__SOLVEVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x188E44B0)

inline static constexpr unsigned int Class_2_E0DAA564708D4230_TypeDefinitionIndex = 73872;

class Class_2_E0DAA564708D4230 : public ::RPG::Client::OpenWorld::VFSDataLoader_1<::RPG::GameCore::AudioGroundVoxelData*>
{
public:
	static ::System::Single* StaticGet_MMDLGFNOMHA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E0DAA564708D4230_TypeDefinitionIndex)->GetStaticField(0x15240);
	}
	::System::Collections::Generic::List_1<::Class_2_D640AF70A652FF6A*>* ICFFJIAGNDK; // 0x48
	::Class_1_D70A30D666F20D90* BJPKBELGNCM; // 0x50

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1, ::RPG::GameCore::StageBaseConfig* a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::RPG::GameCore::StageBaseConfig*, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_F084F42E6711AD43(::UnityEngine::Vector3 a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_METHOD_2_F084F42E6711AD43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01953D7882459DEC(::Class_2_D640AF70A652FF6A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D640AF70A652FF6A*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_METHOD_2_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_15A11EB4EAAB3892(::Class_2_D640AF70A652FF6A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D640AF70A652FF6A*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_METHOD_2_15A11EB4EAAB3892_OFFSET))(this, a1);
	}

	::System::Void Preload()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_PRELOAD_OFFSET))(this);
	}

	::System::Void _PreloadVFSDataInternal(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230__PRELOADVFSDATAINTERNAL_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveVFSDataInternal(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230__SOLVEVFSDATAINTERNAL_OFFSET))(this, a1, a2);
	}

	static ::System::Int64 Method_2_5D16249951989810(::System::Int64 a1, ::RPG::GameCore::StageVoxelDataIndex* a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_METHOD_2_5D16249951989810_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_2226425FEA7C17BC(::System::Int64 a1, ::System::Int64 a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
	{
		return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E0DAA564708D4230_METHOD_2_2226425FEA7C17BC_OFFSET))(a1, a2, a3);
	}
};
