#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PointsAnimCustomDataModule_ValueMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_PROPERTYVECTOR_METHOD_1_12CEF1F3F4C83D6A_OFFSET UNITYSDK_OFFSET(0x1AE16700)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_PROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE16C10)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimCustomDataModule_PropertyVector_TypeDefinitionIndex = 70590;

	class PointsAnimCustomDataModule_PropertyVector : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPG::Client::PointsAnimCustomDataModule_ValueMode Mode; // 0x18
		::UnityEngine::Vector4 ConstantValue; // 0x1C
		::UnityEngine::Vector4 ConstantMin; // 0x2C
		::UnityEngine::Vector4 ConstantMax; // 0x3C
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* RandomList; // 0x50
		::RPG::Client::TAUtils::Vector4AnimationCurve* Animation; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_PROPERTYVECTOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_1_12CEF1F3F4C83D6A()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_PROPERTYVECTOR_METHOD_1_12CEF1F3F4C83D6A_OFFSET))(this);
		}
	};
}
