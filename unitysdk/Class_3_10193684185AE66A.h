#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnablePlayerPlayIdleShow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_10193684185AE66A_METHOD_3_DBDFEC4F5CFD28A9_OFFSET UNITYSDK_OFFSET(0xDFD2F60)
#define CLASS_3_10193684185AE66A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFD2E70)
#define CLASS_3_10193684185AE66A__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD2E40)

inline static constexpr unsigned int Class_3_10193684185AE66A_TypeDefinitionIndex = 52746;

class Class_3_10193684185AE66A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnablePlayerPlayIdleShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_DBDFEC4F5CFD28A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A_METHOD_3_DBDFEC4F5CFD28A9_OFFSET))(a1);
	}
};
