#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1100;
class Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD;
class Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085;
class Class_1_7E0DCA9D208905FE;
namespace RPG::Client::ActivityHipplen { class HipplenGameBoard; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0x9168CC0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x9168A80)
#define CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET UNITYSDK_OFFSET(0x91679A0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9168960)
#define CLASS_1_64F446B04AA329E4_METHOD_1_3121940274ABBCAB_OFFSET UNITYSDK_OFFSET(0x9168AF0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9167700)
#define CLASS_1_64F446B04AA329E4_METHOD_1_3BD5FA935037BC05_OFFSET UNITYSDK_OFFSET(0x9168330)
#define CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9167F00)
#define CLASS_1_64F446B04AA329E4_METHOD_1_4EA2911F2CA340C0_OFFSET UNITYSDK_OFFSET(0x9167A10)
#define CLASS_1_64F446B04AA329E4_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x9167850)
#define CLASS_1_64F446B04AA329E4_METHOD_1_5B4D98174D97636A_OFFSET UNITYSDK_OFFSET(0x9168690)
#define CLASS_1_64F446B04AA329E4_METHOD_1_60EA1AC8E23D1BD4_OFFSET UNITYSDK_OFFSET(0x9168150)
#define CLASS_1_64F446B04AA329E4_METHOD_1_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0x91689C0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x9168540)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x9168C60)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET UNITYSDK_OFFSET(0x9168910)
#define CLASS_1_64F446B04AA329E4_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x9167650)
#define CLASS_1_64F446B04AA329E4_METHOD_1_8AD611CFAB04661D_OFFSET UNITYSDK_OFFSET(0x9167F60)
#define CLASS_1_64F446B04AA329E4_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9168A20)
#define CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x9168BE0)
#define CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0x9168CD0)
#define CLASS_1_64F446B04AA329E4__CTOR_OFFSET UNITYSDK_OFFSET(0x9168CE0)
#define CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0x9168CF0)

inline static constexpr unsigned int Class_1_64F446B04AA329E4_TypeDefinitionIndex = 69526;

class Class_1_64F446B04AA329E4 : public ::System::Object
{
public:
	::Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD* Field_1_4; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_7E0DCA9D208905FE* _HipplenInstance_k__BackingField; // 0x20
	::RPG::Client::ActivityHipplen::HipplenGameBoard* Field_1_2; // 0x28
	::System::Action* Field_1_3; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_172D288B14DCF288(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA2911F2CA340C0(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action* a4, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_4EA2911F2CA340C0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8AD611CFAB04661D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_8AD611CFAB04661D_OFFSET))(this, a1);
	}

	::System::Void Method_1_60EA1AC8E23D1BD4(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_60EA1AC8E23D1BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3BD5FA935037BC05(::System::String* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::Boolean a3, ::UnityEngine::Transform* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::VCameraBlend*, ::System::Boolean, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_3BD5FA935037BC05_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B4D98174D97636A(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_5B4D98174D97636A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BF94DBDD30CA91A(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_1100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1100*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1100* Method_1_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_1100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_3121940274ABBCAB(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_3121940274ABBCAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::Class_1_7E0DCA9D208905FE* get_HipplenInstance()
	{
		return ((::Class_1_7E0DCA9D208905FE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET))(this);
	}

	::System::Void set_HipplenInstance(::Class_1_7E0DCA9D208905FE* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E0DCA9D208905FE*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET))(this, value);
	}

	::System::Void _OnGameBoardLoad_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET))(this);
	}
};
