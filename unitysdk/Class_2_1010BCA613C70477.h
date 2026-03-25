#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::Client { class InverseMask; }
namespace RPG::GameCore { class ShowTutorialMask; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_1010BCA613C70477_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116C7F10)
#define CLASS_2_1010BCA613C70477_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x116C8520)
#define CLASS_2_1010BCA613C70477_METHOD_2_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x116C85B0)
#define CLASS_2_1010BCA613C70477_METHOD_2_BA3668D75F932A95_OFFSET UNITYSDK_OFFSET(0x116C8940)
#define CLASS_2_1010BCA613C70477_METHOD_2_F5C8A89B67E293AE_OFFSET UNITYSDK_OFFSET(0x116C83B0)
#define CLASS_2_1010BCA613C70477_METHOD_2_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x116C8A00)
#define CLASS_2_1010BCA613C70477_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116C7FB0)
#define CLASS_2_1010BCA613C70477_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x116C8660)
#define CLASS_2_1010BCA613C70477_TICK_OFFSET UNITYSDK_OFFSET(0x116C86B0)
#define CLASS_2_1010BCA613C70477__CTOR_OFFSET UNITYSDK_OFFSET(0x116C7EF0)

inline static constexpr unsigned int Class_2_1010BCA613C70477_TypeDefinitionIndex = 47384;

class Class_2_1010BCA613C70477 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::Client::InverseMask* Field_2_3; // 0x20
	::RPG::GameCore::ShowTutorialMask* Field_2_0; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34
	::UnityEngine::Rect Field_2_6; // 0x38
	::System::Single Field_2_2; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialMask*))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5C8A89B67E293AE(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_F5C8A89B67E293AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA3668D75F932A95(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_BA3668D75F932A95_OFFSET))(this, a1, a2);
	}
};
