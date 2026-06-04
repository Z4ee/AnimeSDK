#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CheckLastPhotoGraphResult; }
namespace RPG::GameCore { class PhotoGraphResultContainer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_76F58260D010C680_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106303D0)
#define CLASS_2_76F58260D010C680_METHOD_2_5F85A4993CA2226B_OFFSET UNITYSDK_OFFSET(0x10630760)
#define CLASS_2_76F58260D010C680_METHOD_2_C62732B3D990739A_OFFSET UNITYSDK_OFFSET(0x10630890)
#define CLASS_2_76F58260D010C680_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x106305E0)
#define CLASS_2_76F58260D010C680_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10630810)
#define CLASS_2_76F58260D010C680_TICK_OFFSET UNITYSDK_OFFSET(0x10630480)
#define CLASS_2_76F58260D010C680__CTOR_OFFSET UNITYSDK_OFFSET(0x106302E0)

inline static constexpr unsigned int Class_2_76F58260D010C680_TypeDefinitionIndex = 49239;

class Class_2_76F58260D010C680 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::CheckLastPhotoGraphResult* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_5F85A4993CA2226B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_METHOD_2_5F85A4993CA2226B_OFFSET))(this);
	}

	::System::Boolean Method_2_C62732B3D990739A(::System::Collections::Generic::List_1<::System::String*>* a1, ::RPG::GameCore::PhotoGraphResultContainer* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::PhotoGraphResultContainer*))((::PBYTE)hIl2Cpp + CLASS_2_76F58260D010C680_METHOD_2_C62732B3D990739A_OFFSET))(this, a1, a2);
	}
};
