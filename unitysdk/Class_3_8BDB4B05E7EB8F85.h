#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_E3850E343081E9E1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8BDB4B05E7EB8F85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F2A00)
#define CLASS_3_8BDB4B05E7EB8F85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99F2A70)
#define CLASS_3_8BDB4B05E7EB8F85__CTOR_OFFSET UNITYSDK_OFFSET(0x99F2940)
#define CLASS_3_8BDB4B05E7EB8F85___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F3370)

inline static constexpr unsigned int Class_3_8BDB4B05E7EB8F85_TypeDefinitionIndex = 44259;

class Class_3_8BDB4B05E7EB8F85 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E3850E343081E9E1*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E3850E343081E9E1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E3850E343081E9E1*))((::PBYTE)hIl2Cpp + CLASS_3_8BDB4B05E7EB8F85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BDB4B05E7EB8F85_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BDB4B05E7EB8F85_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BDB4B05E7EB8F85___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
