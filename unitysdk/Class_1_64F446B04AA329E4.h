#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1256;
class Class_1_349FFE7FFEC1E3D1;
class Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD;
class Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085;
namespace RPG::Client::ActivityHipplen { class HipplenGameBoard; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0x17F4AAD0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x17F4A890)
#define CLASS_1_64F446B04AA329E4_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x17F4A830)
#define CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET UNITYSDK_OFFSET(0x17F49760)
#define CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17F4A770)
#define CLASS_1_64F446B04AA329E4_METHOD_1_2D5DF059545E6CC7_OFFSET UNITYSDK_OFFSET(0x17F4A410)
#define CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17F494B0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x17F493E0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_3BD5FA935037BC05_OFFSET UNITYSDK_OFFSET(0x17F4A0B0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17F49CA0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_60EA1AC8E23D1BD4_OFFSET UNITYSDK_OFFSET(0x17F49EE0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x17F4A2C0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x17F49610)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x17F4AA70)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET UNITYSDK_OFFSET(0x17F4A720)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x17F4A7D0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_8775A089CB325D62_OFFSET UNITYSDK_OFFSET(0x17F4A900)
#define CLASS_1_64F446B04AA329E4_METHOD_1_87AE162B26227D62_OFFSET UNITYSDK_OFFSET(0x17F49D00)
#define CLASS_1_64F446B04AA329E4_METHOD_1_D1D2983A3CD888E7_OFFSET UNITYSDK_OFFSET(0x17F497D0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17F4A9F0)
#define CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0x17F4AAE0)
#define CLASS_1_64F446B04AA329E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4AAF0)
#define CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0x17F4AB00)

inline static constexpr unsigned int Class_1_64F446B04AA329E4_TypeDefinitionIndex = 75167;

class Class_1_64F446B04AA329E4 : public ::System::Object
{
public:
	::System::String* EPBNBLDBFPC; // 0x10
	::Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD* ILJKFHIEJJK; // 0x18
	::RPG::Client::ActivityHipplen::HipplenGameBoard* BJGEGPAJNJK; // 0x20
	::System::Action* EFGGKMNKLDN; // 0x28
	::Class_1_349FFE7FFEC1E3D1* _HipplenInstance_k__BackingField; // 0x30
	::System::Boolean PPIGLCIEIIM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_172D288B14DCF288(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1D2983A3CD888E7(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action* a4, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_D1D2983A3CD888E7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_87AE162B26227D62(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_87AE162B26227D62_OFFSET))(this, a1);
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

	::System::Void Method_1_2D5DF059545E6CC7(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_2D5DF059545E6CC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BF94DBDD30CA91A(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_7EA127DE55AAA205(::Class_0_16E4307DCC419505_1256* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1256*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1256* Method_1_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_1256*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_8775A089CB325D62(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_8775A089CB325D62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::Class_1_349FFE7FFEC1E3D1* get_HipplenInstance()
	{
		return ((::Class_1_349FFE7FFEC1E3D1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET))(this);
	}

	::System::Void set_HipplenInstance(::Class_1_349FFE7FFEC1E3D1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_349FFE7FFEC1E3D1*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET))(this, a1);
	}

	::System::Void _OnGameBoardLoad_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET))(this);
	}
};
