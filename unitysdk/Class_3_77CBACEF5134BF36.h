#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_537CF2643FE966A2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_77CBACEF5134BF36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158386C0)
#define CLASS_3_77CBACEF5134BF36_METHOD_3_1823CA609EAF9E96_OFFSET UNITYSDK_OFFSET(0x158392C0)
#define CLASS_3_77CBACEF5134BF36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15838860)
#define CLASS_3_77CBACEF5134BF36__CTOR_OFFSET UNITYSDK_OFFSET(0x15838530)

inline static constexpr unsigned int Class_3_77CBACEF5134BF36_TypeDefinitionIndex = 58886;

class Class_3_77CBACEF5134BF36 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_537CF2643FE966A2*>
{
public:
	::Class_3_07C3C4D2990C49EE* FHABNNPBEIO; // 0x28
	::Class_3_07C3C4D2990C49EE* PPGCGPPDPGG; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_537CF2643FE966A2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_537CF2643FE966A2*))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_1823CA609EAF9E96(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36_METHOD_3_1823CA609EAF9E96_OFFSET))(this, a1);
	}
};
