#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropRewardPreview; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_F306917CAA3BDEDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9866060)
#define CLASS_2_F306917CAA3BDEDD_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x9866710)
#define CLASS_2_F306917CAA3BDEDD_METHOD_2_C0FCC0E203BE2E12_OFFSET UNITYSDK_OFFSET(0x9866350)
#define CLASS_2_F306917CAA3BDEDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9866100)
#define CLASS_2_F306917CAA3BDEDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9866660)
#define CLASS_2_F306917CAA3BDEDD_TICK_OFFSET UNITYSDK_OFFSET(0x98666B0)
#define CLASS_2_F306917CAA3BDEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x9866050)

inline static constexpr unsigned int Class_2_F306917CAA3BDEDD_TypeDefinitionIndex = 49036;

class Class_2_F306917CAA3BDEDD : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::PropRewardPreview* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRewardPreview* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0FCC0E203BE2E12(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_METHOD_2_C0FCC0E203BE2E12_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
