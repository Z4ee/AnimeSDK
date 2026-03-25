#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3948F09825CE1BA8;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BFF550)
#define CLASS_3_FBAB9B763355A599_METHOD_3_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x8BFFA50)
#define CLASS_3_FBAB9B763355A599_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x8BFFC10)
#define CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8BFF700)
#define CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8BFF640)
#define CLASS_3_FBAB9B763355A599__CTOR_OFFSET UNITYSDK_OFFSET(0x8BFF4B0)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BFFD10)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8BFFD20)

inline static constexpr unsigned int Class_3_FBAB9B763355A599_TypeDefinitionIndex = 47482;

class Class_3_FBAB9B763355A599 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryRequestEnterRegion*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_2; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30
	::Class_1_3948F09825CE1BA8* Field_3_3; // 0x38
	::RPG::GameCore::TryRequestEnterRegion* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8A8F4D8840527053()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_8A8F4D8840527053_OFFSET))(this);
	}

	::System::Void Method_3_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
