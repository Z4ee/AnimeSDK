#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::Client { class InverseMask; }
namespace RPG::GameCore { class ShowTutorialMask; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_1010BCA613C70477_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F4FCD0)
#define CLASS_2_1010BCA613C70477_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17F50330)
#define CLASS_2_1010BCA613C70477_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x17F503C0)
#define CLASS_2_1010BCA613C70477_METHOD_2_BA3668D75F932A95_OFFSET UNITYSDK_OFFSET(0x17F50890)
#define CLASS_2_1010BCA613C70477_METHOD_2_F5C8A89B67E293AE_OFFSET UNITYSDK_OFFSET(0x17F501D0)
#define CLASS_2_1010BCA613C70477_METHOD_2_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x17F50950)
#define CLASS_2_1010BCA613C70477_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F4FD70)
#define CLASS_2_1010BCA613C70477_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F504E0)
#define CLASS_2_1010BCA613C70477_TICK_OFFSET UNITYSDK_OFFSET(0x17F50530)
#define CLASS_2_1010BCA613C70477__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4FCB0)

inline static constexpr unsigned int Class_2_1010BCA613C70477_TypeDefinitionIndex = 58851;

class Class_2_1010BCA613C70477 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowTutorialMask* OFKGLJOAMLD; // 0x20
	::RPG::Client::InverseMask* AHFPLGOENNH; // 0x28
	::UnityEngine::Rect PKLIOOJEGJO; // 0x30
	::System::Single EHLMEPDCBBC; // 0x40
	::System::Int32 POHBPGJFONJ; // 0x44
	::System::Single DJKKCALPBJE; // 0x48

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

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA3668D75F932A95(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_1010BCA613C70477_METHOD_2_BA3668D75F932A95_OFFSET))(this, a1, a2);
	}
};
