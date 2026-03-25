#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0A12E545170318AA.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_79F61E3248BECD05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C44110)
#define CLASS_3_79F61E3248BECD05_METHOD_3_0279A43AB75917CE_OFFSET UNITYSDK_OFFSET(0x9C47270)
#define CLASS_3_79F61E3248BECD05_METHOD_3_159EC4A01855F1F3_OFFSET UNITYSDK_OFFSET(0x9C47DD0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_19FA3773AAC2AEF8_OFFSET UNITYSDK_OFFSET(0x9C46340)
#define CLASS_3_79F61E3248BECD05_METHOD_3_1ABF33EF52D6BBF0_OFFSET UNITYSDK_OFFSET(0x9C47550)
#define CLASS_3_79F61E3248BECD05_METHOD_3_1D9B8F3876251E59_OFFSET UNITYSDK_OFFSET(0x9C464D0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x9C442E0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_283FCF4CAB5CF241_OFFSET UNITYSDK_OFFSET(0x9C46AD0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_2F28A8CBB72E81C1_OFFSET UNITYSDK_OFFSET(0x9C45F70)
#define CLASS_3_79F61E3248BECD05_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9C45E70)
#define CLASS_3_79F61E3248BECD05_METHOD_3_357A6CA4A438AA90_OFFSET UNITYSDK_OFFSET(0x9C45180)
#define CLASS_3_79F61E3248BECD05_METHOD_3_4088FB534872FD90_OFFSET UNITYSDK_OFFSET(0x9C455C0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0x9C467A0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_7636B0C0D1795753_OFFSET UNITYSDK_OFFSET(0x9C47C20)
#define CLASS_3_79F61E3248BECD05_METHOD_3_771EBC0CF103AAB2_OFFSET UNITYSDK_OFFSET(0x9C47850)
#define CLASS_3_79F61E3248BECD05_METHOD_3_AC4264BBC5A2903C_OFFSET UNITYSDK_OFFSET(0x9C47450)
#define CLASS_3_79F61E3248BECD05_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9C45C30)
#define CLASS_3_79F61E3248BECD05_METHOD_3_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0x9C47BD0)
#define CLASS_3_79F61E3248BECD05_METHOD_3_DBFE8394F80DC52B_OFFSET UNITYSDK_OFFSET(0x9C46D00)
#define CLASS_3_79F61E3248BECD05_METHOD_3_EA3ED10C18DB0D6D_OFFSET UNITYSDK_OFFSET(0x9C45AE0)
#define CLASS_3_79F61E3248BECD05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C44230)
#define CLASS_3_79F61E3248BECD05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9C47B20)
#define CLASS_3_79F61E3248BECD05_TICK_OFFSET UNITYSDK_OFFSET(0x9C47B70)
#define CLASS_3_79F61E3248BECD05__CTOR_OFFSET UNITYSDK_OFFSET(0x9C43EB0)
#define CLASS_3_79F61E3248BECD05___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C48780)

inline static constexpr unsigned int Class_3_79F61E3248BECD05_TypeDefinitionIndex = 46706;

class Class_3_79F61E3248BECD05 : public ::Class_2_0A12E545170318AA
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_7; // 0x40
	::Class_3_5775A4FEC79026BC* Field_3_5; // 0x48
	::RPG::GameCore::AdventureTriggerAttack* Field_3_0; // 0x50
	::Class_3_5775A4FEC79026BC* Field_3_4; // 0x58
	::Class_3_5775A4FEC79026BC* Field_3_6; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_3; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x70
	::RPG::GameCore::TaskContext* Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_357A6CA4A438AA90(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_357A6CA4A438AA90_OFFSET))(this, a1);
	}

	::System::Void Method_3_4088FB534872FD90(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_4088FB534872FD90_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA3ED10C18DB0D6D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_EA3ED10C18DB0D6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_2F28A8CBB72E81C1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_2F28A8CBB72E81C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_19FA3773AAC2AEF8(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_19FA3773AAC2AEF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_3_DBFE8394F80DC52B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_DBFE8394F80DC52B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0279A43AB75917CE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_0279A43AB75917CE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC4264BBC5A2903C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_AC4264BBC5A2903C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1ABF33EF52D6BBF0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_1ABF33EF52D6BBF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_283FCF4CAB5CF241(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_283FCF4CAB5CF241_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1D9B8F3876251E59(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_1D9B8F3876251E59_OFFSET))(this, a1);
	}

	::System::Void Method_3_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_3_771EBC0CF103AAB2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_771EBC0CF103AAB2_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D98D2C67BEEB1556(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_D98D2C67BEEB1556_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_3_7636B0C0D1795753(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_7636B0C0D1795753_OFFSET))(a1);
	}

	::System::Void Method_3_159EC4A01855F1F3(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05_METHOD_3_159EC4A01855F1F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
