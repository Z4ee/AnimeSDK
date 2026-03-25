#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6576721C7FB43DCA_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x11162430)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_233FDA33A0DD14AE_OFFSET UNITYSDK_OFFSET(0x11163460)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_480020CEF0AF3AAF_OFFSET UNITYSDK_OFFSET(0x11162B40)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_7771106B36A840EC_OFFSET UNITYSDK_OFFSET(0x11162ED0)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_9746EADD98F8CD3D_OFFSET UNITYSDK_OFFSET(0x111632D0)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_B1BC142A00DBE45A_OFFSET UNITYSDK_OFFSET(0x11162950)
#define CLASS_2_6576721C7FB43DCA_METHOD_2_B7C76E66D4E0D5C3_OFFSET UNITYSDK_OFFSET(0x11163250)
#define CLASS_2_6576721C7FB43DCA_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x111625D0)
#define CLASS_2_6576721C7FB43DCA__CTOR_OFFSET UNITYSDK_OFFSET(0x111622C0)
#define CLASS_2_6576721C7FB43DCA___IFIXBASEPROXY_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x11163580)
#define CLASS_2_6576721C7FB43DCA___IFIXBASEPROXY_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x11163590)

inline static constexpr unsigned int Class_2_6576721C7FB43DCA_TypeDefinitionIndex = 62563;

class Class_2_6576721C7FB43DCA : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::Class_2_F47F7A3F5E97970D* Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* Field_2_1; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1BC142A00DBE45A(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_B1BC142A00DBE45A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_480020CEF0AF3AAF(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_480020CEF0AF3AAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7771106B36A840EC(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_7771106B36A840EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7C76E66D4E0D5C3(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_B7C76E66D4E0D5C3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9746EADD98F8CD3D(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_9746EADD98F8CD3D_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* Method_2_233FDA33A0DD14AE(::Entitas::IEntity* a1)
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA_METHOD_2_233FDA33A0DD14AE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA___IFIXBASEPROXY_DEACTIVATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_onEntityCreated(::Entitas::IContext* P0, ::Entitas::IEntity* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6576721C7FB43DCA___IFIXBASEPROXY_ONENTITYCREATED_OFFSET))(this, P0, P1);
	}
};
