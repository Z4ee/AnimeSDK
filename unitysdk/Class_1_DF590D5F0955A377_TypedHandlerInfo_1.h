#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A;
class Class_1_9AD828BA811E7C7A_1;
class Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873;
template <typename T> class Class_1_DF590D5F0955A377_TypedPacketHandler_1;

inline static constexpr unsigned int Class_1_DF590D5F0955A377_TypedHandlerInfo_1_TypeDefinitionIndex = 34461;

template <typename TRsp>
class Class_1_DF590D5F0955A377_TypedHandlerInfo_1 : public ::System::Object
{
public:
	::Class_1_DF590D5F0955A377_TypedPacketHandler_1<TRsp>* _PacketHandler; // 0x0
	::System::UInt32 _RspMsgID_k__BackingField; // 0x0
};
