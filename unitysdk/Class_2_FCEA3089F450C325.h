#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FCEA3089F450C325_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1367C460)
#define CLASS_2_FCEA3089F450C325_METHOD_2_07396C3C011010A7_OFFSET UNITYSDK_OFFSET(0x1367C9C0)
#define CLASS_2_FCEA3089F450C325_METHOD_2_17A074DA3C805034_OFFSET UNITYSDK_OFFSET(0x1367D470)
#define CLASS_2_FCEA3089F450C325_METHOD_2_233FDA33A0DD14AE_OFFSET UNITYSDK_OFFSET(0x1367D600)
#define CLASS_2_FCEA3089F450C325_METHOD_2_AA541B05F98A41C4_OFFSET UNITYSDK_OFFSET(0x1367D3F0)
#define CLASS_2_FCEA3089F450C325_METHOD_2_C9AE75581D4AC831_OFFSET UNITYSDK_OFFSET(0x1367CBF0)
#define CLASS_2_FCEA3089F450C325_METHOD_2_F51B81E7E49B5674_OFFSET UNITYSDK_OFFSET(0x1367CFD0)
#define CLASS_2_FCEA3089F450C325_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1367C600)
#define CLASS_2_FCEA3089F450C325__CTOR_OFFSET UNITYSDK_OFFSET(0x1367C2E0)
#define CLASS_2_FCEA3089F450C325___IFIXBASEPROXY_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1367D710)
#define CLASS_2_FCEA3089F450C325___IFIXBASEPROXY_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1367D720)

inline static constexpr unsigned int Class_2_FCEA3089F450C325_TypeDefinitionIndex = 71392;

class Class_2_FCEA3089F450C325 : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::Class_2_F47F7A3F5E97970D* Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* Field_2_1; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_07396C3C011010A7(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_07396C3C011010A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9AE75581D4AC831(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_C9AE75581D4AC831_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F51B81E7E49B5674(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_F51B81E7E49B5674_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA541B05F98A41C4(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_AA541B05F98A41C4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_17A074DA3C805034(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_17A074DA3C805034_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* Method_2_233FDA33A0DD14AE(::Entitas::IEntity* a1)
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325_METHOD_2_233FDA33A0DD14AE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325___IFIXBASEPROXY_DEACTIVATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FCEA3089F450C325___IFIXBASEPROXY_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}
};
