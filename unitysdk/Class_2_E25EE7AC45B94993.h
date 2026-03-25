#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VFSDataLoader_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_56FF45D7B2C55655;
class Class_2_B7F2227F5894FFC0;
namespace RPG::GameCore { class AudioGroundVoxelData; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E25EE7AC45B94993_METHOD_2_2226425FEA7C17BC_OFFSET UNITYSDK_OFFSET(0x8AA1D30)
#define CLASS_2_E25EE7AC45B94993_METHOD_2_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x8AA1EA0)
#define CLASS_2_E25EE7AC45B94993_METHOD_2_5D16249951989810_OFFSET UNITYSDK_OFFSET(0x8AA1C40)
#define CLASS_2_E25EE7AC45B94993_METHOD_2_A95D7484FE7E3803_OFFSET UNITYSDK_OFFSET(0x8AA1E10)
#define CLASS_2_E25EE7AC45B94993_METHOD_2_D00E76AF3148FB8C_OFFSET UNITYSDK_OFFSET(0x8AA18D0)
#define CLASS_2_E25EE7AC45B94993_PRELOAD_OFFSET UNITYSDK_OFFSET(0x8AA1F30)
#define CLASS_2_E25EE7AC45B94993__CCTOR_OFFSET UNITYSDK_OFFSET(0x8AA2760)
#define CLASS_2_E25EE7AC45B94993__CTOR_OFFSET UNITYSDK_OFFSET(0x8A68670)
#define CLASS_2_E25EE7AC45B94993__PRELOADVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x8AA2430)
#define CLASS_2_E25EE7AC45B94993__SOLVEVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x8AA2610)
#define CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY_PRELOAD_OFFSET UNITYSDK_OFFSET(0x8AA27A0)
#define CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY__PRELOADVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x8AA27B0)
#define CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY__SOLVEVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x8AA27E0)

inline static constexpr unsigned int Class_2_E25EE7AC45B94993_TypeDefinitionIndex = 60641;

class Class_2_E25EE7AC45B94993 : public ::RPG::Client::OpenWorld::VFSDataLoader_1<::RPG::GameCore::AudioGroundVoxelData*>
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E25EE7AC45B94993_TypeDefinitionIndex)->GetStaticField(0x12490);
	}
	::Class_1_56FF45D7B2C55655* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::Class_2_B7F2227F5894FFC0*>* Field_2_1; // 0x50

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1, ::RPG::GameCore::StageConfig* a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::StageConfig*, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_D00E76AF3148FB8C(::UnityEngine::Vector3 a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_METHOD_2_D00E76AF3148FB8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A95D7484FE7E3803(::Class_2_B7F2227F5894FFC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B7F2227F5894FFC0*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_METHOD_2_A95D7484FE7E3803_OFFSET))(this, a1);
	}

	::System::Void Method_2_323DCA18419DFB89(::Class_2_B7F2227F5894FFC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B7F2227F5894FFC0*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_METHOD_2_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Preload()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_PRELOAD_OFFSET))(this);
	}

	::System::Void _PreloadVFSDataInternal(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993__PRELOADVFSDATAINTERNAL_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveVFSDataInternal(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993__SOLVEVFSDATAINTERNAL_OFFSET))(this, a1, a2);
	}

	static ::System::Int64 Method_2_5D16249951989810(::System::Int64 a1, ::RPG::GameCore::StageVoxelDataIndex* a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_METHOD_2_5D16249951989810_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_2226425FEA7C17BC(::System::Int64 a1, ::System::Int64 a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
	{
		return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993_METHOD_2_2226425FEA7C17BC_OFFSET))(a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Preload()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY_PRELOAD_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__PreloadVFSDataInternal(::UnityEngine::Vector3 P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY__PRELOADVFSDATAINTERNAL_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy__SolveVFSDataInternal(::System::Int64 P0, ::Il2CppArray<::System::Byte>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_E25EE7AC45B94993___IFIXBASEPROXY__SOLVEVFSDATAINTERNAL_OFFSET))(this, P0, P1);
	}
};
