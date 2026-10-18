#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_3CFD07DFD0180CDE;
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDFE3470)
#define CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDFE34F0)
#define CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_INVOKE_OFFSET UNITYSDK_OFFSET(0xDFE2FE0)
#define CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A__CTOR_OFFSET UNITYSDK_OFFSET(0xDFE3400)

inline static constexpr unsigned int Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A_TypeDefinitionIndex = 79553;

class Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Action* Invoke(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Class_1_3CFD07DFD0180CDE* a2)
	{
		return ((::System::Action*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Class_1_3CFD07DFD0180CDE* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_1_3CFD07DFD0180CDE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Action* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_CLASS_3_37704591509EA55A_ENDINVOKE_OFFSET))(this, a1);
	}
};
