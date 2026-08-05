#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D0757B0CB855E47.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_6708F667CD105CA8;
class Class_1_C7E6991E78CB1409;
namespace MoleMole { class UIComicPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_41C2E9AA3946D743_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123600C0)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_038F2ABE5684A1B2_OFFSET UNITYSDK_OFFSET(0x12360580)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_1202E26389DD0634_OFFSET UNITYSDK_OFFSET(0x134BD560)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x123608E0)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x12360390)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_6B1CB6DCE3FD42B9_OFFSET UNITYSDK_OFFSET(0x12360520)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12360420)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_9C65A4305B8B6BA9_OFFSET UNITYSDK_OFFSET(0x134BD850)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_B0F68F659243FD20_OFFSET UNITYSDK_OFFSET(0x134BD5D0)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x134BDA60)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_B89889029F3FEC03_OFFSET UNITYSDK_OFFSET(0x134BD730)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x134BD490)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_DC03788F53F7381E_OFFSET UNITYSDK_OFFSET(0x123601F0)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_FBF96257B45B12EC_OFFSET UNITYSDK_OFFSET(0x134BDB10)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x134BD900)
#define CLASS_2_41C2E9AA3946D743_METHOD_2_FF5A6A437711FCE9_OFFSET UNITYSDK_OFFSET(0x12360930)
#define CLASS_2_41C2E9AA3946D743_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1235FE90)
#define CLASS_2_41C2E9AA3946D743_UPDATE_OFFSET UNITYSDK_OFFSET(0x1235FED0)
#define CLASS_2_41C2E9AA3946D743__CTOR_OFFSET UNITYSDK_OFFSET(0x123601D0)

inline static constexpr unsigned int Class_2_41C2E9AA3946D743_TypeDefinitionIndex = 83419;

class Class_2_41C2E9AA3946D743 : public ::Foundation::SingletonDisposable_1<::Class_2_41C2E9AA3946D743*>
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_C7E6991E78CB1409*>* Field_2_4; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_8; // 0x18
	::Class_1_6708F667CD105CA8* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6708F667CD105CA8*>* Field_2_7; // 0x28
	::MoleMole::UIComicPageController* Field_2_15; // 0x30
	::Class_1_C7E6991E78CB1409* Field_2_11; // 0x38
	::System::Double Field_2_3; // 0x40
	::System::Double Field_2_2; // 0x48
	::System::Boolean Field_2_9; // 0x50
	::System::Boolean Field_2_0; // 0x51
	::System::Boolean Field_2_1; // 0x52
	::System::Boolean Field_2_10; // 0x53
	::System::Int32 Field_2_5; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DC03788F53F7381E(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_DC03788F53F7381E_OFFSET))(this, a1);
	}

	::Class_1_C7E6991E78CB1409* Method_2_67C10584F4320583()
	{
		return ((::Class_1_C7E6991E78CB1409*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_67C10584F4320583_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_038F2ABE5684A1B2(::System::Double a1, ::System::Double a2, ::System::Double& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_038F2ABE5684A1B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6B1CB6DCE3FD42B9(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_6B1CB6DCE3FD42B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF5A6A437711FCE9(::Class_1_6708F667CD105CA8* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6708F667CD105CA8*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_FF5A6A437711FCE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1202E26389DD0634(::MoleMole::UIComicPageController* a1, ::System::Collections::Generic::List_1<::Class_1_6708F667CD105CA8*>* a2, ::UnityEngine::Playables::PlayableDirector* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIComicPageController*, ::System::Collections::Generic::List_1<::Class_1_6708F667CD105CA8*>*, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_1202E26389DD0634_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B0F68F659243FD20(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_B0F68F659243FD20_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_FBF96257B45B12EC(::Enum_3_5D0757B0CB855E47 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_5D0757B0CB855E47))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_FBF96257B45B12EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C65A4305B8B6BA9(::Class_1_6708F667CD105CA8* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6708F667CD105CA8*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_9C65A4305B8B6BA9_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B89889029F3FEC03(::System::Double a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_41C2E9AA3946D743_METHOD_2_B89889029F3FEC03_OFFSET))(this, a1);
	}
};
